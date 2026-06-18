// write a function which creates a mask with least signficant n bits set to 1

unsigned least_n_bits_to_one(unsigned x, int n){
    unsigned mask = -1;
    mask <<= (32 - n);
    return (x & mask);
}