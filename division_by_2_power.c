int div_by_16(int n){
	//bias is 2^k - 1 where k is exponent of constant expressed in power of 2 (in this case k = 4, because 16 = 2^4), bias is used only for negative numbers
	int bias = (n >> 31) & 0xF;  // 0xF if 1111, we use it for obtain 0 in case of n >= 0 & obtain 15 in case of n < 0
	return (n + bias) >> 4;
}



int div_by_32(int n){
	// bias is 31, and in hex it's 0x1F
	int bias = (n >> 31) & 0x1F;   // we could write (n >> 31) & 31, so with bias in decimal version
	return (n + bias) >> 5;
}



int div_by_128(int n){
	//2^k - 1 is equal to 127, so 127 in hex is 0x7F
	int bias = (n >> 31) & 0x7F;    //we could write (n >> 31) & 127, so with bias in decimal version
	return (n + bias) >> 7;
}


/*
bias is equivalent to 2^k - 1 for negative numbers, and it's 0 for positive, because (int n < 0) >> 31 returns 111...1111, and (int n >= 0) >> 31 returns 000..000,
and & 2^k - 1 on 0000..000 and on 1111..111 returns 0 or 2^k - 1 itself.
adding bias (0 in positive and 1 in negative) to int n before right shifting of k allows us to use shifting for compute division for negative and integer numbers.
*/
