//Find the sum of odd numbers in natural numbers within 100.
#include<stdio.h>
int main()
{
	int n = 0, sum = 0;
	for (n = 0; n <= 100; n++)
	{
		if (n % 2 != 0)
			sum += n;
	}
	printf("%d", sum);
	return 0;
}