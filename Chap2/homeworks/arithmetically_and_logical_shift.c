// write a function that returns 1 if shifting on the machine is arithmetic, 
// remember that a shift is arithmetic if it'on right and are inserted bit on left equal to sign bit
// a shift is logical when on left are inserted 0 regardless by sign bit


int int_shifts_are_arithmetic(void){
    int x = -1;
    int shift_x = x >> 1;
    return (x == shift_x);
}



// write a function that applies arithmetically right shifting regardless by machine


int arithmetically_right_shift(int x, int k){
    if (int_shifts_are_arithmetic()) return x >> k;
    else {
        if (((x >> (int)sizeof(int)) * 8 - 1) == 0) return x >> k;
        else return (x >> k) | (~0 << (sizeof(int) * 8 - k));
    }
}


