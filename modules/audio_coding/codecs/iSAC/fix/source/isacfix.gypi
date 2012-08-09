# Copyright (c) 2012 The WebRTC project authors. All Rights Reserved.
#
# Use of this source code is governed by a BSD-style license
# that can be found in the LICENSE file in the root of the source
# tree. An additional intellectual property rights grant can be found
# in the file PATENTS.  All contributing project authors may
# be found in the AUTHORS file in the root of the source tree.

{
  'targets': [
    {
      'target_name': 'iSACFix',
      'type': '<(library)',
      'dependencies': [
        '<(webrtc_root)/common_audio/common_audio.gyp:signal_processing',
        '<(webrtc_root)/system_wrappers/source/system_wrappers.gyp:system_wrappers',
      ],
      'include_dirs': [
        '../interface',
      ],
      'direct_dependent_settings': {
        'include_dirs': [
          '../interface',
        ],
      },
      'sources': [
        '../interface/isacfix.h',
        'arith_routines.c',
        'arith_routines_hist.c',
        'arith_routines_logist.c',
        'bandwidth_estimator.c',
        'decode.c',
        'decode_bwe.c',
        'decode_plc.c',
        'encode.c',
        'entropy_coding.c',
        'fft.c',
        'filterbank_tables.c',
        'filterbanks.c',
        'filters.c',
        'initialize.c',
        'isacfix.c',
        'lattice.c',
        'lattice_c.c',
        'lpc_masking_model.c',
        'lpc_tables.c',
        'pitch_estimator.c',
        'pitch_filter.c',
        'pitch_gain_tables.c',
        'pitch_lag_tables.c',
        'spectrum_ar_model_tables.c',
        'transform.c',
        'arith_routins.h',
        'bandwidth_estimator.h',
        'codec.h',
        'entropy_coding.h',
        'fft.h',
        'filterbank_tables.h',
        'lpc_masking_model.h',
        'lpc_tables.h',
        'pitch_estimator.h',
        'pitch_gain_tables.h',
        'pitch_lag_tables.h',
        'settings.h',
        'spectrum_ar_model_tables.h',
        'structs.h',
      ],
      'conditions': [
        ['OS!="win"', {
          'defines': [
            'WEBRTC_LINUX',
          ],
        }],
        ['OS=="android and armv7==1"', {
          'dependencies': [ 'isac_neon', ],
        }],
      ],
    },
  ],
  'conditions': [
    ['OS=="android"', {
      'targets': [
        {
          'target_name': 'isac_neon',
          'type': '<(library)',
          'includes': ['../../../../../../build/arm_neon.gypi',],
          'dependencies': [
            '<(webrtc_root)/common_audio/common_audio.gyp:signal_processing',
          ],
          'sources': [
            'lattice_neon.S',
            'filters_neon.c',
          ],
        },
      ],
    }],
  ],
}

# Local Variables:
# tab-width:2
# indent-tabs-mode:nil
# End:
# vim: set expandtab tabstop=2 shiftwidth=2:
