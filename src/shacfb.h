#ifndef SHACFB_H
#define SHACFB_H

#include "shacipher.h"

class SHACFB : public SHACipher
{
public:
    SHACFB(QByteArray key, QByteArray iv);
    QByteArray encrypt(QByteArray block);
    QByteArray decrypt(QByteArray block);
};

#endif // SHACFB_H
