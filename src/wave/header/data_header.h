#ifndef WAVE_HEADER_DATA_HEADER_H_
#define WAVE_HEADER_DATA_HEADER_H_

#include "../error.h"

namespace QWave {

    struct WAVE_API DataHeader {
        char sub_chunk_2_id[4];
        quint32 sub_chunk_2_size;

        DataHeader();
    };

} // namespace wave

#endif // WAVE_HEADER_DATA_HEADER_H_
