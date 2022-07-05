#ifndef WAVE_WAVE_HEADER_H_
#define WAVE_WAVE_HEADER_H_

#include <QByteArray>
#include <QFile>

#include "wave/error.h"

namespace QWave {

    class WAVE_API Header {
    public:
        Error Init(QIODevice *stream, quint64 position);

        QByteArray chunk_id() const;
        quint32 chunk_size() const;
        quint64 position() const;

    private:
        QByteArray id_;
        quint32 size_;
        quint64 position_;
    };

} // namespace wave

#endif // WAVE_WAVE_HEADER_H_
