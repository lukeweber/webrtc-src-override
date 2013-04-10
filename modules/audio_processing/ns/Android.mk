# Copyright (c) 2012 The WebRTC project authors. All Rights Reserved.
#
# Use of this source code is governed by a BSD-style license
# that can be found in the LICENSE file in the root of the source
# tree. An additional intellectual property rights grant can be found
# in the file PATENTS.  All contributing project authors may
# be found in the AUTHORS file in the root of the source tree.

#############################
# Build the non-neon library.
LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

include $(MY_ROOT_PATH)/android-webrtc.mk

LOCAL_MODULE_CLASS := STATIC_LIBRARIES
LOCAL_MODULE := libwebrtc_ns
LOCAL_MODULE_TAGS := optional
LOCAL_GENERATED_SOURCES :=
LOCAL_SRC_FILES := \
    noise_suppression_x.c \
    nsx_core.c

# Files for floating point.
# noise_suppression.c ns_core.c

# Flags passed to both C and C++ files.
LOCAL_CFLAGS := $(MY_WEBRTC_COMMON_DEFS)

LOCAL_C_INCLUDES := \
    $(MY_THIRD_PARTY_PATH) \
    $(MY_WEBRTC_PATH) \
    $(MY_WEBRTC_PATH)/modules/audio_processing/utility \
    $(MY_WEBRTC_PATH)/common_audio/signal_processing/include \
    $(MY_WEBRTC_PATH)/system_wrappers/interface \
    $(LOCAL_PATH)/include

LOCAL_STATIC_LIBRARIES += libwebrtc_system_wrappers

LOCAL_SHARED_LIBRARIES := \
    libcutils \
    libdl \
    libstlport

ifndef NDK_ROOT
include external/stlport/libstlport.mk
endif
include $(BUILD_STATIC_LIBRARY)

#############################
# Build the neon library.
ifeq ($(WEBRTC_BUILD_NEON_LIBS),true)

include $(CLEAR_VARS)

LOCAL_ARM_MODE := arm
LOCAL_MODULE_CLASS := STATIC_LIBRARIES
LOCAL_MODULE := libwebrtc_ns_neon
LOCAL_MODULE_TAGS := optional
NS_ASM_HEADER := $(LOCAL_PATH)/ns_core_neon_offsets.h
NS_ASM_HEADER_DIR := $(LOCAL_PATH)

# Generate a header file nsx_core_neon_offsets.h which will be included in
# assembly file nsx_core_neon.S, from file nsx_core_neon_offsets.c.
$(NS_ASM_HEADER): $(MY_WEBRTC_PATH)/build/generate_asm_header.py \
		$(LOCAL_PATH)/nsx_core_neon_offsets.c
# Previous version which I assume worked on linux, notice it's also indented and getting the required sources for the target from $^
#	@python $^ --compiler=$(TARGET_CC) --options="$(addprefix -I, \
#		$(LOCAL_INCLUDES)) $(addprefix -isystem , $(TARGET_C_INCLUDES)) -S" \
#		--pattern=offset_ --dir=$(NS_ASM_HEADER_DIR)
#Example working command to try to play around with.
#python build/generate_asm_header.py  ./modules/audio_processing/ns/nsx_core_neon_offsets.c --compiler=/Users/luke/android/android-ndk-r8d/toolchains/arm-linux-androideabi-4.6/prebuilt/darwin-x86/bin/arm-linux-androideabi-gcc --options="-I/Users/luke/projects/webrtc-jingle-client/trunk/third_party -I/Users/luke/android/android-ndk-r8d/platforms/android-9/arch-arm/usr/include -S" --pattern=offset_ --dir=`pwd`

LOCAL_GENERATED_SOURCES := $(NS_ASM_HEADER)
LOCAL_SRC_FILES := nsx_core_neon.S

# Flags passed to both C and C++ files.
LOCAL_CFLAGS := \
    $(MY_WEBRTC_COMMON_DEFS) \
	$(MY_ARM_CFLAGS_NEON) \
    -mfpu=neon \
    -mfloat-abi=softfp

LOCAL_C_INCLUDES := \
    $(LOCAL_PATH)/include \
    $(NS_ASM_HEADER_DIR) \
    $(MY_THIRD_PARTY_PATH) \
    $(MY_WEBRTC_PATH) \
    $(MY_WEBRTC_PATH)/modules/audio_processing/utility \
    $(MY_WEBRTC_PATH)/common_audio/signal_processing/include \
    $(MY_WEBRTC_PATH)/system_wrappers/interface

LOCAL_INCLUDES := $(LOCAL_C_INCLUDES)

ifeq ($(NDK_TOOLCHAIN_VERSION),clang3.2)
	PATTERN_OFFSET := _offset_
else
	PATTERN_OFFSET := offset_
endif
#Hack to make this work on OSX
$(shell python $(MY_WEBRTC_PATH)/build/generate_asm_header.py \
		$(LOCAL_PATH)/nsx_core_neon_offsets.c --compiler=$(TARGET_CC) --options="$(addprefix -I, \
		$(LOCAL_INCLUDES)) $(addprefix -isystem , $(TARGET_C_INCLUDES)) -S" \
		--pattern=$(PATTERN_OFFSET) --dir=$(NS_ASM_HEADER_DIR))


ifndef NDK_ROOT
include external/stlport/libstlport.mk
endif
include $(BUILD_STATIC_LIBRARY)
endif # ifeq ($(WEBRTC_BUILD_NEON_LIBS),true)
