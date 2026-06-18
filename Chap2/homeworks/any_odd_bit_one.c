//write a function that returns 1 when any odd bit of x equal 1; 0 otherwise


int any_odd_bit(unsigned x){
    int y = 0xAAAAAAAA;   //because 0xAAAAAAAA=10101010 10101010 10101010 10101010, 1 in odd positions
    return (x & y) != 0;
}