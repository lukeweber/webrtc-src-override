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
LOCAL_MODULE := libwebrtc_isac
LOCAL_MODULE_TAGS := optional
LOCAL_SRC_FILES := \
    arith_routines.c \
    arith_routines_hist.c \
    arith_routines_logist.c \
    bandwidth_estimator.c \
    crc.c \
    decode.c \
    decode_bwe.c \
    encode.c \
    encode_lpc_swb.c \
    entropy_coding.c \
    fft.c \
    filter_functions.c \
    filterbank_tables.c \
    intialize.c \
    isac.c \
    filterbanks.c \
    pitch_lag_tables.c \
    lattice.c \
    lpc_gain_swb_tables.c \
    lpc_analysis.c \
    lpc_shape_swb12_tables.c \
    lpc_shape_swb16_tables.c \
    lpc_tables.c \
    pitch_estimator.c \
    pitch_filter.c \
    pitch_gain_tables.c \
    spectrum_ar_model_tables.c \
    transform.c

# Flags passed to both C and C++ files.
LOCAL_CFLAGS := \
    $(MY_WEBRTC_COMMON_DEFS)

LOCAL_C_INCLUDES := \
	$(MY_THIRD_PARTY_PATH) \
    $(MY_WEBRTC_PATH) \
    $(MY_WEBRTC_PATH)/common_audio/signal_processing/include

ifeq ($(TARGET_ARCH),arm)
LOCAL_C_INCLUDES += \
    $(MY_WEBRTC_PATH)/modules/audio_coding/codecs/isac/fix/interface
else
LOCAL_C_INCLUDES += \
    $(MY_WEBRTC_PATH)/modules/audio_coding/codecs/isac/main/interface
endif

LOCAL_SHARED_LIBRARIES := \
    libcutils \
    libdl \
    libstlport

ifndef NDK_ROOT
include external/stlport/libstlport.mk
endif
include $(BUILD_STATIC_LIBRARY)
