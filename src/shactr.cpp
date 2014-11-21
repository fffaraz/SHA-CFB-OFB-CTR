#include "shactr.h"

SHACTR::SHACTR(QByteArray key, QByteArray iv) :
    SHACipher(key, iv),
    counter(0)
{
}

QByteArray SHACTR::encrypt(QByteArray block)
{
    QByteArray hashoutput = hash(QByteArray::fromRawData((char *)&counter, sizeof(counter)));
    return xorba(block, hashoutput);
}

QByteArray SHACTR::decrypt(QByteArray block)
{
    return encrypt(block);
}

void SHACTR::reset()
{
    counter = 0;
}
