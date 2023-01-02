//Determine whether a number is prime.
#include<stdio.h>
int main()
{
	int n = 0, i = 0, ret = 0;
	printf("Please input an integer:");
	do
	{
		ret = scanf_s("%d", &n);
		if (ret < 1)
		{
			printf("\nError occurs. Please input again:");
			while (getchar() != '\n');
		}
	} while (ret < 1);
	printf("\n");
	for (i = 2; i < n; i++)
	{
		if ((n % i) == 0)
		{
			printf("It's not prime.\n");
			return 0;
		}
	}
	printf("It's prime.\n");
	return 0;
}