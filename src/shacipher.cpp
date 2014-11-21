#include "shacipher.h"

SHACipher::SHACipher(QByteArray key, QByteArray iv) :
    key(key),
    iv(iv),
    last_iv(iv)
{
}

void SHACipher::reset()
{
    last_iv = iv;
}

QByteArray SHACipher::xorba(QByteArray a, QByteArray b)
{
    Q_ASSERT(a.size() <= b.size());
    int size = a.size();
    QByteArray result;
    result.reserve(size);
    for(int i=0; i<size; i++)
        result[i] = a[i] ^ b[i];
    return result;
}

QByteArray SHACipher::hash()
{
    return QCryptographicHash::hash(key + last_iv, QCryptographicHash::Sha3_512);
}

QByteArray SHACipher::hash(QByteArray prefix)
{
    return QCryptographicHash::hash(prefix + key + last_iv, QCryptographicHash::Sha3_512);
}
