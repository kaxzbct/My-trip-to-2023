//Find the value of 1-1/2+1/3-1/4+...+1/99-1/100.
#include<stdio.h>
int main()
{
	int n = 0;
	float sum1 = 0, sum2 = 0;
	for (n = 1; n <= 99; n += 2)
		sum1 += 1 / (float)n;
	for (n = 2; n <= 100; n += 2)
		sum2 -= 1 / (float)n;
	printf("%f\n", sum1 + sum2);
}