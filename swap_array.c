void swap_var (void *x, void *y){
	*x = *x ^ *y;
	*y = *x ^ *y;
	*x = *x ^ *y;
}


void swap_arr(void *arr, int counter){
	int first, last;
	first = 0;
	last = counter - 1;
	while (first < last){
		swap_var(&arr[first++], &arr[last--]);
	}
}
