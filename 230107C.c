//A pair of rabbits will give birth to a pair of rabbits every month 
//from the third month after birth.
//If rabbits do not die, output the total number of rabbit pairs every month.
#include<stdio.h>
int main()
{
	int a = 1, b = 1, c = 2, i = 0, n = 0, tmp = 0;
	printf("Please input the month:");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		printf("%6d  ", a);
		a = b;
		b = c;
		c = a + b;
		if (i % 5 == 0)
			printf("\n");
	}
	return 0;
}