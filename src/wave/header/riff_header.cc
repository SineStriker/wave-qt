#include "wave/header/riff_header.h"

#include <QString>

namespace QWave {

    RIFFHeader::RIFFHeader() {
        qstrncpy(chunk_id, "RIFF", 4);
        qstrncpy(format, "WAVE", 4);
    }

} // namespace wave
