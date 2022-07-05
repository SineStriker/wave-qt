#ifndef WAVE_HEADER_WAVE_HEADER_H_
#define WAVE_HEADER_WAVE_HEADER_H_

#include "wave/header/data_header.h"
#include "wave/header/fmt_header.h"
#include "wave/header/riff_header.h"

namespace QWave {

    struct WAVE_API WAVEHeader {
        RIFFHeader riff;
        FMTHeader fmt;
        DataHeader data;

        WAVEHeader();
    };

} // namespace wave

#endif // WAVE_HEADER_WAVE_HEADER_H_
