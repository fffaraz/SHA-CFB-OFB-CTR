#ifndef TESTS_H
#define TESTS_H

#include "sha2.h"

void print_ui512(ui512 num)
{
    unsigned char *cnum = (unsigned char *) &num;
    for(int i=0; i<(512/8); i++)
    {
        int byte = cnum[i];
        printf("%02X", byte);
    }
    printf("\n");
}

void test1()
{
    ui512 input;
    ui512 output = SHA2::hash(input);
    //cout << hex << input  << endl;
    //cout << hex << output << endl;
    print_ui512(input);
    print_ui512(output);
}

void alltests()
{
    test1();
}

#endif // TESTS_H
