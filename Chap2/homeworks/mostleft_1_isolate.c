// write a functions that returns value of mostleft 1 in binary representation of a number


unsigned mostleft_one_isolate(unsigned x){
    int i = 1;
    while (i < 32){
        x |= x >> i;   //we obtain the first 1 in the good position followed by all 1s
        i *= 2;
    }
    return (x ^ (x >> 1));   // only the first remains 1
}