LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

include $(MY_ROOT_PATH)/android-webrtc.mk

LOCAL_MODULE_CLASS := STATIC_LIBRARIES
LOCAL_MODULE := libwebrtc_common_video
LOCAL_MODULE_TAGS := optional
LOCAL_CPP_EXTENSION := .cc
LOCAL_SRC_FILES := \

# Flags passed to both C and C++ files.
LOCAL_CFLAGS := \
	$(MY_WEBRTC_COMMON_DEFS)

LOCAL_C_INCLUDES := \
	$(MY_THIRD_PARTY_PATH) \
	$(MY_THIRD_PARTY_PATH)/libyuv/include \
	$(MY_THIRD_PARTY_PATH)/libjpeg_turbo \
	$(MY_WEBRTC_PATH) \
	$(MY_WEBRTC_PATH)/modules/interface \
	$(MY_WEBRTC_PATH)/common_video/jpeg/include \
	$(MY_WEBRTC_PATH)/common_video/libyuv/include

LOCAL_SRC_FILES := \
	i420_video_frame.cc \
	plane.cc

ifndef NDK_ROOT
include external/stlport/libstlport.mk
endif
include $(BUILD_STATIC_LIBRARY)
