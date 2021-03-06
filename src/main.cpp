#include <iostream>
#include <string>
using namespace std;

#include <QCoreApplication>

#include "filecipher.h"

void usage()
{
    cout << "Usage: shacipher -e/-d key [input-file] [output-file]" << endl;
}

int main(int argc, char *argv[])
{
    //QCoreApplication a(argc, argv);

    if(argc < 3)
    {
        usage();
        return 1;
    }

    string enc_dec = argv[1];
    if(enc_dec != "-e" && enc_dec != "-d")
    {
        usage();
        return 2;
    }

    string input,output;
    if(argc > 3)
        input  = argv[3];
    if(argc > 4)
        output = argv[4];

    quint64 key = strtoull(argv[2], nullptr, 16);
    FileCipher fc(key);

    if(enc_dec == "-e")
        return fc.encrypt(input, output);
    if(enc_dec == "-d")
        return fc.decrypt(input, output);

    return 0;
    //return a.exec();
}
