//Input a decimal integer.
//Output the sum of the numbers on each digit.
#include<stdio.h>
int main()
{
	int n = 0, sum = 0;
	printf("Please input a decimal integer:");
	scanf_s("%d", &n);
	printf("\n");
	if (n < 0)
		n *= -1;
	while (n != 0)
	{
		sum += n % 10;
		n /= 10;
	}
	printf("The sum of the numbers on each digit is %d.\n", sum);
}