#include "sha2.h"

SHA2::SHA2()
{
}

ui512 SHA2::hash(ui512 input)
{
    ui512 output;
    sha512((unsigned char *) &input, SHA512_DIGEST_SIZE, (unsigned char *) &output);
    return output;
}
