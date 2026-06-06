#include <stdio.h>
#include <stdlib.h>


int compare_bits(void *a, void *b, size_t size){
	unsigned char *p = (char *)a;
	unsigned char *q = (char *)b;

	for (int i = size_a - 1; i >= 0; i--){
		for (int j = 7; j >= 0; j--){
			int bit_a = (p[i] >> j) & 1;
			int bit_b = (q[i] >> j) & 1;
			if (bit_a != bit_b) return 0;
		}
	}
	return 1;
}
