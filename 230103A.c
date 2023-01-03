//Output the first forty items of Fibonacci sequence.
#include<stdio.h>
int main()
{
	int a = 0, b = 1, tmp = 2, i = 0, n = 0;
	for (i = 0; i < 40; i++)
	{
		tmp = a + b;
		a = b;
		b = tmp;
		printf("%9d ", a);
		n++;
		if (n % 5 == 0)
			printf("\n");
	}
	return 0;
}