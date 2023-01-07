//Narcissistic number refers to a three digit number whose cubic sum of each digit 
//equals to the number itself. 
//Output the narcissistic number between 100 and 999.
#include<stdio.h>
int main()
{
	int n = 0, a = 0, b = 0, c = 0;
	printf("The narcissistic numbers between 100 and 999 are ");
	for (n = 100; n <= 999; n++)
	{
		a = n % 10;
		b = n / 10 % 10;
		c = n / 100;
		if (a * a * a + b * b * b + c * c * c == n)
			printf("%d ", n);
	}
	return 0;
}