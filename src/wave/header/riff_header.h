#ifndef WAVE_HEADER_RIFF_HEADER_H_
#define WAVE_HEADER_RIFF_HEADER_H_

#include "../error.h"

namespace QWave {

    struct WAVE_API RIFFHeader {
        char chunk_id[4];
        quint32 chunk_size;
        char format[4];

        RIFFHeader();
    };

} // namespace wave

#endif // WAVE_HEADER_RIFF_HEADER_H_
