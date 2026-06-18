// write a function that returns 1 when x contains an odd number of 1s; 0 otherwise, assume w = 32 bits


int odd_ones(unsigned x){
    int i = 16;
    while (i > 0){
        x ^= x >> i;      //using xor we eliminate couples of 1s
        i /= 2;
    }
    return x & 1;
}