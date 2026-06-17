int intsub_overflow_check(int a, int b){
	int diff =(int)((unsigned) a - (unsigned) b);
	int neg_over = a < 0 && b > 0 && diff >= 0;
	int pos_over = a > 0 && b < 0 && diff <= 0;
	return !neg_over && !pos_over;
}


int intadd_overflow_checK(int a, int b){
	int sum = (int)((unsigned)a + (unsigned)b);
	int pos_over = a > 0 && b > 0 && sum < 0;
	int neg_over = a < 0 && b < 0 && sum > 0;
	return !neg_over && !pos_over;
}
