// write a function that returns 1 when alla bin nums of an int x are 1


int all_ones(int x){
    unsigned char *p = (unsigned char *)&x;
    for (int i = (int) sizeof(int) - 1; i >= 0; i--){
        for (int j = 7; j >= 0; j--){
            int bit = (p[i] >> j) & 1;
            if (bit == 0) return 0;
        }
    }
    return 1;
}


//write a function that returns 1 when all bin nums of an int x are 0

int all_zeros(int x){
    unsigned char *p = (unsigned char*)&x;
    for (int i = (int) sizeof(int) - 1; i >= 0; i--){
        for (int j = 7; j >= 0; j--){
            int bit = (p[i] >> j) & 1;
            if (bit == 1) return 0;
        }
    }
    return 1;
}