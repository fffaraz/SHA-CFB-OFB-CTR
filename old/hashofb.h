#ifndef HASHOFB_H
#define HASHOFB_H

#include "hash.h"

class HashOFB
{
public:
    HashOFB(ui512 key, ui512 iv);
    ui512 encrypt(ui512 block);
    ui512 decrypt(ui512 block);
    void reset();

private:
    ui512 iv;
    ui512 last_block;

};

#endif // HASHOFB_H
