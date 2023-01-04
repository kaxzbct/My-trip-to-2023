//Input the value of n.
//Output the value of 1 * 1+2 * 2+3 * 3+4 * 4+5 * 5+...+n * n.
//It is required to write function f to find the square.
#include<stdio.h>
int f(int num)
{
	return num * num;
}
int main()
{
	int n = 0, i = 0, sum = 1;
	printf("Please input the value of n:");
	scanf_s("%d", &n);
	printf("\n1*1");
	if (n > 1)
	{
		for (i = 1; i <= n; i++)
		{
			sum += f(i);
			if (i > 1)
				printf("+%d*%d", i, i);
		}
	}
	printf("=%d\n", sum);
	return 0;
}