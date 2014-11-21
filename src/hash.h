#ifndef HASH_H
#define HASH_H

#include <cstdint>
using namespace std;

struct ui512
{
    uint64_t d[8];

    ui512(uint64_t v0 = 0, uint64_t v1 = 0, uint64_t v2 = 0, uint64_t v3 = 0, uint64_t v4 = 0, uint64_t v5 = 0, uint64_t v6 = 0, uint64_t v7 = 0)
    {
        d[0] = v0;
        d[1] = v1;
        d[2] = v2;
        d[3] = v3;
        d[4] = v4;
        d[5] = v5;
        d[6] = v6;
        d[7] = v7;
    }
};

class Hash
{
public:
    Hash();
};

#endif // HASH_H
