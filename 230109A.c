//Find the factorial of n.
#include<stdio.h>
int Fac(int N)
{
	if (N == 1)
		return 1;
	else
		return N * Fac(N - 1);
}
int main()
{
	int n = 0;
	printf("Please input an integer:");
	scanf_s("%d", &n);
	printf("\n%d!=%d\n",n, Fac(n));
	return 0;
}