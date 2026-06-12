
int tmult_ok (int x, int y){
	if (x == 0) return 1;
	int prod = x * y;
	return (prod / x == y);
}
