// write a program that concanates the first bytes of y till the last one excluded and the last one of x:

#include <stdio.h>

unsigned int last_byte_cat_to_first_bytes(unsigned int x, unsigned int y){
    x = 0x89ABCDEF;
    y = 0x765432B0;
    unsigned char *px = (unsigned char *)&x;
    unsigned char *py = (unsigned char *)&y;
    unsigned int z = 0;
    unsigned char *pz = (unsigned char *)&z;

    for (int i = sizeof(int) - 1; i >= 0; i--){
        if (i < 3) pz[i] = py[i];
        else if (i == 3) pz[i] = px[i];
    }
    return z;
}