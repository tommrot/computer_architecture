#include <stdio.h>
#include <stdlib.h>

typedef char unsigned *byte_ptr;    //char because we want to scroll data as an array, with char we scroll data byte per byte.

void show_bytes(char *type_name, byte_ptr start, size_t len){
	printf("%s: \n", type_name);
	for (int i = 0; i < len; i++){
		printf("[%.2x]\n", start[i]);	// %x is the placeholder for hex value, start[i] is *(&start[0] + i)
	}
}


int main(void){
	int x = 356;
	byte_ptr p = (byte_ptr)&x; 	 //initialing pointer p casting address of x to byte_ptr
	show_bytes("int", p, sizeof(int));   //casting pointer p to byte_ptr for scroll its content byte x byte
	float s = 12.23;
	byte_ptr q =(byte_ptr)&s; 	//initialing pointer q casting address of s  to byte_ptr
	show_bytes("float", q, sizeof(float));  //casting pointer q to byte_ptr for scroll its content byte x byte
}


	/*
	Output:
	Int:
	[64]	it's represented in small endian, first cell has less significance:  4 * 16^0 + 6 * 16^1 + 1 * 16^2 = 356
	[01]
	[00]
	[00]
	float:
	[14]    float convertion is more elaborated than int convertion:
	[ae]	in binary (last byte is most signif): 4 = 0100, 1 = 0001, 4 = 0100, 3 = 0011, a = 1010, e = 1110, 1 = 0001, 4 = 0100, total representation: 01000001010000111010111000010100
	[43]	sign: msb = 0 -> positive sign | exponent(next 8 bits) = 10000010, in decimal: 128 + 2 = 130, applied is 130 - 127 = 3
	[41]	mantix = (next 23 bits) = 10000111010111000010100, in decimal = 2^-1+0+0+0+0+2^-6+2^-7+2^-8+0+2^-10+0+2^-12+2^-13+2^-14+0+0+0+0+2^-19+0+2^-21+0+0
		mantix approximated is 0.5287500..., and for computation is added 1, our exponent is 3, so 1.5287500 * 2^3 is equal to 12.23
*/
