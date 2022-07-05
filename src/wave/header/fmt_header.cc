#include "wave/header/fmt_header.h"

#include <QString>

namespace QWave {

    FMTHeader::FMTHeader() {
        qstrncpy(sub_chunk_1_id, "fmt ", 4);
        sub_chunk_1_size = 16;

        // default values
        audio_format = 1; // PCM
        num_channel = 1;
        sample_rate = 44100;
        bits_per_sample = 16;
        byte_per_block = (bits_per_sample * num_channel) / 8;
        byte_rate = byte_per_block * sample_rate;
    }

} // namespace wave
