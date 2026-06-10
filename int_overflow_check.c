int int_overflow_check(int a, int b){
	int neg_over = a < 0 && b < 0 && (a + b) >= 0;
	int pos_over = a > 0 && b > 0 && (a + b) < 0;
	return !neg_over && !pos_over;
}
