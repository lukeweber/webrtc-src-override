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
LOCAL_MODULE := libwebrtc_audio_coding
LOCAL_MODULE_TAGS := optional
LOCAL_CPP_EXTENSION := .cc
LOCAL_SRC_FILES := \
    acm_cng.cc \
    acm_codec_database.cc \
    acm_dtmf_detection.cc \
    acm_dtmf_playout.cc \
    acm_g722.cc \
    acm_generic_codec.cc \
    acm_ilbc.cc \
    acm_isac.cc \
    acm_neteq.cc \
    acm_pcm16b.cc \
    acm_pcma.cc \
    acm_pcmu.cc \
    acm_red.cc \
    acm_resampler.cc \
    audio_coding_module.cc \
    audio_coding_module_impl.cc

# Flags passed to both C and C++ files.
LOCAL_CFLAGS := \
    $(MY_WEBRTC_COMMON_DEFS)

LOCAL_C_INCLUDES := \
    $(MY_THIRD_PARTY_PATH) \
    $(MY_WEBRTC_PATH) \
    $(MY_WEBRTC_PATH)/modules/audio_coding/main/interface \
    $(MY_WEBRTC_PATH)/modules/audio_coding/codecs/cng/include \
    $(MY_WEBRTC_PATH)/modules/audio_coding/codecs/g711/include \
    $(MY_WEBRTC_PATH)/modules/audio_coding/codecs/g722/include \
    $(MY_WEBRTC_PATH)/modules/audio_coding/codecs/ilbc/interface \
    $(MY_WEBRTC_PATH)/modules/audio_coding/codecs/isac/main/interface \
    $(MY_WEBRTC_PATH)/modules/audio_coding/codecs/isac/fix/interface \
    $(MY_WEBRTC_PATH)/modules/audio_coding/codecs/pcm16b/include \
    $(MY_WEBRTC_PATH)/modules/audio_coding/neteq/interface \
    $(MY_WEBRTC_PATH)/modules/interface \
    $(MY_WEBRTC_PATH)/common_audio/resampler/include \
    $(MY_WEBRTC_PATH)/common_audio/signal_processing/include \
    $(MY_WEBRTC_PATH)/common_audio/vad/include \
    $(MY_WEBRTC_PATH)/system_wrappers/interface

LOCAL_SHARED_LIBRARIES := \
    libcutils \
    libdl \
    libstlport

ifndef NDK_ROOT
include external/stlport/libstlport.mk
endif
include $(BUILD_STATIC_LIBRARY)
