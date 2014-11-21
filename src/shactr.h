#ifndef SHACTR_H
#define SHACTR_H

#include "shacipher.h"

class SHACTR : public SHACipher
{
public:
    SHACTR(QByteArray key, QByteArray iv);
    QByteArray encrypt(QByteArray block);
    QByteArray decrypt(QByteArray block);
    void reset();
private:
    quint64 counter;
};

#endif // SHACTR_H
