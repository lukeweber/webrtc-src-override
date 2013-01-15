# Copyright (c) 2011 The WebRTC project authors. All Rights Reserved.
#
# Use of this source code is governed by a BSD-style license
# that can be found in the LICENSE file in the root of the source
# tree. An additional intellectual property rights grant can be found
# in the file PATENTS.  All contributing project authors may
# be found in the AUTHORS file in the root of the source tree.

LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

include $(MY_ROOT_PATH)/android-webrtc.mk

LOCAL_ARM_MODE := arm
LOCAL_MODULE_CLASS := STATIC_LIBRARIES
LOCAL_MODULE := libwebrtc_audio_device
LOCAL_MODULE_TAGS := optional
LOCAL_CPP_EXTENSION := .cc
LOCAL_SRC_FILES := \
    audio_device_buffer.cc \
    audio_device_generic.cc \
    audio_device_utility.cc \
    audio_device_impl.cc \
    android/audio_device_opensles_android.cc \
    android/audio_device_jni_android.cc \
    android/audio_device_utility_android.cc

# Flags passed to both C and C++ files.
LOCAL_CFLAGS := \
    $(MY_WEBRTC_COMMON_DEFS)

LOCAL_C_INCLUDES := \
    $(MY_THIRD_PARTY_PATH) \
    $(MY_WEBRTC_PATH) \
    $(MY_WEBRTC_PATH)/modules/interface \
    $(MY_WEBRTC_PATH)/common_audio/resampler/include \
    $(MY_WEBRTC_PATH)/common_audio/signal_processing/include \
    $(MY_WEBRTC_PATH)/system_wrappers/interface \
    $(LOCAL_PATH)/android \
    $(LOCAL_PATH)/dummy \
    $(LOCAL_PATH)/linux \
    $(LOCAL_PATH)/include

LOCAL_SHARED_LIBRARIES := \
    libcutils \
    libdl \
    libstlport \
    libOpenSLES

ifndef NDK_ROOT
include external/stlport/libstlport.mk
endif
include $(BUILD_STATIC_LIBRARY)
