#include "shaofb.h"

SHAOFB::SHAOFB(QByteArray key, QByteArray iv) :
    SHACipher(key, iv)
{
}

QByteArray SHAOFB::encrypt(QByteArray block)
{
    last_iv = hash();
    return xorba(block, last_iv);
}

QByteArray SHAOFB::decrypt(QByteArray block)
{
    return encrypt(block);
}
