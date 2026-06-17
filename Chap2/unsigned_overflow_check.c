int check_overflow_for_unsigned(unsigned a, unsigned b){
	unsigned sum = a + b;
	return sum >= a;
}
