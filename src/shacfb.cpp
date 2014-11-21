#include "shacfb.h"

SHACFB::SHACFB(QByteArray key, QByteArray iv) :
    SHACipher(key, iv)
{
}

QByteArray SHACFB::encrypt(QByteArray block)
{
    last_iv = xorba(block, hash());
    return last_iv;
}

QByteArray SHACFB::decrypt(QByteArray block)
{
    QByteArray hashoutput = hash();
    last_iv = block;
    return xorba(block, hashoutput);
}


