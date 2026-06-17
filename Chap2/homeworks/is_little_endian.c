//write a program that returns 1 when machine is little endian and 0 when it's big endian

int is_little_endian(){
    unsigned int x = 1;
    unsigned char *p = (unsigned char *) &x;
    return *p == 1;          //p is first byte of int x; if it's equal to one machine is little endian, else it's big endian
}