#include "wave/header/data_header.h"

#include <QString>

namespace QWave {

    DataHeader::DataHeader() {
        qstrncpy(sub_chunk_2_id, "data", 4);
    }

} // namespace wave
