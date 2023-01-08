//The sum of all factors of an integer X 
//(including 1, excluding X itself) is equal to Y.
//And the sum of all factors of integer Y 
//(including 1, excluding Y itself) is equal to X, 
//then the integers X and Y are called intimate numbers. 
//Find all intimate numbers within 3000.
#include<stdio.h>
int main()
{
	int i = 0, x = 0, y = 0, sum = 0;
	printf("The intimate numbers are:      ");
	for (i = 1; i < 3000; i++)
	{
		for (x = 1, y = 0; x <= i / 2; x++)
		{
			if ((i % x) == 0)
				y += x;
		}
		for (x = 1, sum = 0; x <= y / 2; x++)
		{
			if ((y % x) == 0)
				sum += x;
		}
		if ((sum == i) && (i < y))
			printf("%d and %d    ", i, y);
	}
	return 0;
}
