
int is_little_endian (void){
    int x = 1;
    char *p = (char *)&x;
    if (p[0] == 1) return 1;
    else return 0;
}


// write a program that returns 0 if every bit in the least signiﬁcant byte of x equals 1.

int lsb_all_ones(int x){
    unsigned char *p = (unsigned char *) &x;
    if (is_little_endian()) return (p[0] == 0xFF);
    else return (p[(int)sizeof(int) - 1] == 0xFF);
}

// write a program that returns 0 if every bit in the least signiﬁcant byte of x equals 1.

int lsb_any_one(int x){
    unsigned char *p = (unsigned char*)&x;
    if (is_little_endian()){
        for (int i = 0; i < 8; i++){
            int bit = (p[0] >> i) & 1;
            if (bit == 1) return 1;
        }
        return 0;
    } else {
        for (int i = 0; i < 8; i++){
            int bit = (p[(int)sizeof(int) - 1] >> i) & 1;
            if (bit == 1) return 1;
        }
        return 0;
    }
}