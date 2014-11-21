#ifndef SHA2_H
#define SHA2_H

#include "hash.h"
#include "sha2/sha2_c.h"

class SHA2 : public Hash
{
public:
    SHA2();
    static ui512 hash(ui512 input);

};

#endif // SHA2_H
