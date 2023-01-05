//Finding the greatest common divisor of two positive integers.
#include<stdio.h>
int Min(int x, int y)
{
	if (x > y)
		return y;
	else
		return x;
}
int main()
{
	int n = 0, m = 0, i = 0, gcd = 0;
	printf("Please input a positive integer:");
	scanf_s("%d", &n);
	printf("\nPlease input another positive integer:");
	scanf_s("%d", &m);
	for (i = 1; i <= Min(n, m); i++)
	{
		if ((n % i == 0) && (m % i == 0))
			gcd = i;
	}
	printf("\nThe greatest common divisor is %d.\n ", gcd);
	return 0;
}