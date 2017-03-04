#include <iostream>
#include <stdio.h>
#define BUFFSIZE 100
using namespace  std;

int main(int argc, char const *argv[])
{
    /* This program use to copy content of one file to another */
    /* if target file not exist, it will creat a new one */
    FILE *fp1, *fp2;
    if (argc != 3)
    {
        cout << "You must input two argument" << endl;
        return 1;
    }
    if (!(fp1 = fopen(argv[1], "r")))
    {
        cout << "Can not open file ' " << argv[1] << '\'' << endl;
    }
    if (!(fp2 = fopen(argv[2], "w+")))
    {
        cout << "Can not open file ' " << argv[2] << '\'' << endl;
    }
    char buff[BUFFSIZE];
    int count = BUFFSIZE;
    while (count == BUFFSIZE)
    {
        count = fread(buff, sizeof(char), BUFFSIZE, fp1);
        if (count == BUFFSIZE)
            fwrite(buff, sizeof(char), BUFFSIZE, fp2);
        else
            fwrite(buff, sizeof(char), count, fp2);
    }
    cout << "Copy complete!" << endl;
    return 0;
}