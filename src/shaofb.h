#ifndef SHAOFB_H
#define SHAOFB_H

#include "shacipher.h"

class SHAOFB : public SHACipher
{
public:
    SHAOFB(QByteArray key, QByteArray iv);
    QByteArray encrypt(QByteArray block);
    QByteArray decrypt(QByteArray block);
};

#endif // SHAOFB_H
