#ifndef SHACIPHER_H
#define SHACIPHER_H

#include <QtCore>
#include <QByteArray>
#include <QCryptographicHash>

class SHACipher
{
public:
    SHACipher(QByteArray key, QByteArray iv);
    //virtual QByteArray encrypt(QByteArray block) = 0;
    //virtual QByteArray decrypt(QByteArray block) = 0;
    void reset();
protected:
    QByteArray key;
    QByteArray iv;
    QByteArray last_iv;
    QByteArray xorba(QByteArray a, QByteArray b);
    QByteArray hash();
    QByteArray hash(QByteArray prefix);
};

#endif // SHACIPHER_H
