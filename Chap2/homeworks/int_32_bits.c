/*
writing a procedure int_size_is_32() that yields 1
when run on a machine for which an int is 32 bits, and yields 0 otherwise. You are
not allowed to use the sizeof operator
*/

int is_int_32_bit(){
    int x = 1;
    if (x << 32 == 0) return 1;
    return 0;
}