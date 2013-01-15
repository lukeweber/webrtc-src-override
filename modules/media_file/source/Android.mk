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
LOCAL_MODULE := libwebrtc_media_file
LOCAL_MODULE_TAGS := optional
LOCAL_CPP_EXTENSION := .cc
LOCAL_SRC_FILES := \
    avi_file.cc \
    media_file_impl.cc \
    media_file_utility.cc

# Flags passed to both C and C++ files.
LOCAL_CFLAGS := \
    $(MY_WEBRTC_COMMON_DEFS) \
    '-DWEBRTC_MODULE_UTILITY_VIDEO'

LOCAL_C_INCLUDES := \
    $(MY_THIRD_PARTY_PATH) \
    $(MY_WEBRTC_PATH) \
    $(MY_WEBRTC_PATH)/modules/interface \
    $(MY_WEBRTC_PATH)/modules/utility/interface \
    $(MY_WEBRTC_PATH)/audio_coding/main/interface \
    $(MY_WEBRTC_PATH)/system_wrappers/interface \
    $(MY_WEBRTC_PATH)/modules/media_file/interface

LOCAL_SHARED_LIBRARIES := \
    libcutils \
    libdl \
    libstlport

ifndef NDK_ROOT
include external/stlport/libstlport.mk
endif
include $(BUILD_STATIC_LIBRARY)
