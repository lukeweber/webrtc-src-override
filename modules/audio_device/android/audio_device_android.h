
#ifndef SRC_MODULES_AUDIO_DEVICE_ANDROID_AUDIO_DEVICE_ANDROID_H_
#define SRC_MODULES_AUDIO_DEVICE_ANDROID_AUDIO_DEVICE_ANDROID_H_
namespace webrtc {
const uint32_t N_REC_SAMPLES_PER_SEC = 16000; // Default is 16 kHz
const uint32_t N_PLAY_SAMPLES_PER_SEC = 16000; // Default is 16 kHz

const uint32_t N_REC_CHANNELS = 1; // default is mono recording
const uint32_t N_PLAY_CHANNELS = 1; // default is mono playout

const uint32_t REC_BUF_SIZE_IN_SAMPLES = 480; // Handle max 10 ms @ 48 kHz
const uint32_t PLAY_BUF_SIZE_IN_SAMPLES = 480; // Handle max 10 ms @ 48 kHz
}  // namespace webrtc
#endif  // SRC_MODULES_AUDIO_DEVICE_ANDROID_AUDIO_DEVICE_OPENSLES_ANDROID_H_
