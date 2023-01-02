//Determine whether it's a leap year.
#include<stdio.h>
int main()
{
	int year = 0, ret = 0;
	printf("Please input a year:");
	do
	{
		ret = scanf_s("%d", &year);
		if (ret < 1)
		{
			printf("\nError occurs. Please input again:");
			while (getchar() != '\n');
		}
	} while (ret < 1);
	printf("\n");
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		printf("It's a leap year.\n");
	else
		printf("It's not a leap year.\n");
	return 0;
}