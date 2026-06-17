// write a function that replaces i-sim byte of a number with another byte



unsigned int replace_byte(unsigned int n, int i, char byte){
    char *pn = (char *)&n;
    pn[i] = byte;
    return n;
}