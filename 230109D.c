//Input a nonnegative integer.
//Output the sum of the numbers on each digit.
#include<stdio.h>
int Dgt(int N)
{
	if (N / 10 == 0)
		return N;
	else
		return (N % 10) + Dgt(N / 10);
}
int main()
{
	int n = 0;
	printf("Please input a nonnegtive integer:");
	scanf_s("%d", &n);
	printf("\nThe sum of the numbers on each digit is %d\n", Dgt(n));
	return 0;
}