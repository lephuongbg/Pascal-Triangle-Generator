#ifndef PT_FUNCTION
#define PT_FUNCTION

/*Function for calculate factorial*/
double factorial(int var) 
{
	if (var == 0) return 1;
	return (var * factorial(var-1));
}

/*Function for calculate k-combination of a set n*/
double combination(int n, int k)
{
	if (!(k >= 0 && k <= n)) {
		printf("can't calculate combination");
		return 0;
	}
	return factorial(n)/(factorial(k)*factorial(n-k));
}

#endif
