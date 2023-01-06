//Given that 1, 2, 3, 4, 5.
//Output three digit numbers that can be composed without repetition.
#include<stdio.h>
int main()
{
	int a = 0, b = 0, c = 0, n = 0, count = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				if ((a != b) && (b != c) && (c != a))
				{
					n = c * 1 + b * 10 + a * 100;
					printf("%d ", n);
					count++;
					if (count % 5 == 0)
						printf("\n");
				}
			}
		}
	}
	return 0;
}