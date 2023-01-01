//It is known that the fixed deposit interest rate of the bank is r = 2.25 %.
//Input the deposit principal x, deposit years n, 
//Output the sum of the principal and interest 
//y = x(1 + r) (1 + r)... (1 + r), a total of ns (1 + r).
#include<stdio.h>
int main()
{
	double rate = 0.0225, ratio = 1, sum = 0;
	int x = 0, n = 0, i = 0;
	printf("Please input the deposit principal:");
	scanf_s("%d", &x);
	printf("\n");
	printf("Please input the deposit years:");
	scanf_s("%d", &n);
	printf("\n");
	for (i = 0; i < n; i++)
		ratio *= (1 + rate);
	sum = ratio * x;
	printf("the sum of the principal and interest is %.2lf.\n", sum);
	return 0;
}