LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

include $(MY_ROOT_PATH)/android-webrtc.mk

LOCAL_MODULE_CLASS := STATIC_LIBRARIES
LOCAL_MODULE := libwebrtc_bitrate_controller
LOCAL_MODULE_TAGS := optional
LOCAL_CPP_EXTENSION := .cc
LOCAL_SRC_FILES := \
	bitrate_controller_impl.cc \
	send_side_bandwidth_estimation.cc

LOCAL_C_INCLUDES := \
    $(MY_WEBRTC_PATH)/modules/interface \
    $(MY_THIRD_PARTY_PATH) \
    $(MY_WEBRTC_PATH)

LOCAL_CFLAGS := \
   $(MY_WEBRTC_COMMON_DEFS)

include $(BUILD_STATIC_LIBRARY)
