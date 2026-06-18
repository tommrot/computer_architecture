int is_little_endian(void){
    int x = 1;
    unsigned char *p = (unsigned char*) &x;
    if (p[0] == 1) return 1;
    else return 0;
}

//write a function that returns 1 if all bits of most significant byte of an int is 0:


int msb_all_zeros(int x){
    unsigned char *p = (unsigned char*)&x;
    if (is_little_endian()) return (p[(int)sizeof(int) - 1] == 0x00);
    else return (p[0] == 0x00);
}


//write a function that returns 1 if any bit of msb of an int is 0


int msb_any_zero(int x){
    unsigned char *p = (unsigned char *)&x;
    if (is_little_endian()){
        for (int i = 0; i < 8; i++){
            if (!((p[(int)sizeof(int) - 1] >> i) & 1)) return 1;
        }
        return 0;
    } else {
        for (int i = 0; i < 8; i++){
            if (!((p[0] >> i) & 1)) return 1;
        }
        return 0;
    }
}