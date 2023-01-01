//Sum the first fifteen items of the following sequence:
//2/1, 3/2, 5/3, 8/5, 13/8, 21/13...
#include<stdio.h>
int main()
{
	int a = 2, b = 1, tmp = 0, i = 0;
	double sum = 0, n = 0;
	for (i = 1; i <= 15; i++)
	{
		n = (double)a / b;
		sum += n;
		tmp = b;
		b = a;
		a = a + tmp;
	}
	printf("%.2lf", sum);
	return 0;
}