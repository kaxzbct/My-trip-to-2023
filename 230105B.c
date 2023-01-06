//Finding the greatest common divisor of two positive integers.
#include<stdio.h>
int main()
{
	int n = 0, m = 0, i = 0, tmp = 0;
	printf("Please input two positive integer:");
	scanf_s("%d%d", &n, &m);
	if (n > m)
	{
		tmp = n;
		n = m;
		m = tmp;
	}
	if (m % n != 0)
		n = m % n;
	printf("\nThe greatest common divisor is %d.\n ", n);
	return 0;
}
