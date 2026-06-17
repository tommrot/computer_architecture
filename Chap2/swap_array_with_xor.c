#include <string.h>
#include <stdlib.h>


void swap_var(int *x, int *y){
	*x = *x ^ *y;
	*y = *x ^ *y;
	*x = *x ^ *y;
}


void swap_arr(int *arr, int count){
	int first = 0;
	int last = count - 1;
	while (first < last){
		swap_var(&arr[first++], &arr[last--]);
	}
}