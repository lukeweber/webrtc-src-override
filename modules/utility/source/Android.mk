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

LOCAL_MODULE_CLASS := STATIC_LIBRARIES
LOCAL_MODULE := libwebrtc_utility
LOCAL_MODULE_TAGS := optional
LOCAL_CPP_EXTENSION := .cc
LOCAL_SRC_FILES := coder.cc \
    audio_frame_operations.cc \
    file_player_impl.cc \
    file_recorder_impl.cc \
    process_thread_impl.cc \
    rtp_dump_impl.cc \
    frame_scaler.cc \
    video_coder.cc \
    video_frames_queue.cc

# Flags passed to both C and C++ files.
LOCAL_CFLAGS := \
    $(MY_WEBRTC_COMMON_DEFS) \
    # '-DWEBRTC_MODULE_UTILITY_VIDEO'

LOCAL_C_INCLUDES := \
    $(MY_THIRD_PARTY_PATH) \
    $(MY_WEBRTC_PATH) \
    $(MY_WEBRTC_PATH)/modules/utility/interface \
    $(MY_WEBRTC_PATH)/modules/interface \
    $(MY_WEBRTC_PATH)/modules/audio_coding/main/interface \
    $(MY_WEBRTC_PATH)/modules/media_file/interface \
    $(MY_WEBRTC_PATH)/modules/video_coding/main/interface \
    $(MY_WEBRTC_PATH)/modules/video_coding/codecs/interface \
    $(MY_WEBRTC_PATH)/common_video/vplib/main/interface \
    $(MY_WEBRTC_PATH)/common_audio/resampler/include \
    $(MY_WEBRTC_PATH)/system_wrappers/interface

LOCAL_SHARED_LIBRARIES := \
    libcutils \
    libdl \
    libstlport

ifndef NDK_ROOT
include external/stlport/libstlport.mk
endif
include $(BUILD_STATIC_LIBRARY)


