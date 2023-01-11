//Convert binary to decimal.
#include<stdio.h>
#include<math.h>
int I = 0;
int Sum = 0;
void Dec(int N)
{
	if (N == 0)
		return;
	Dec(N / 10);
	Sum += N % 10 * (int)pow(2, I++);
}
int main()
{
	long int n = 0;
	int i = 0, sum = 0;
	printf("Please input a binary number:");
	scanf_s("%ld", &n);
	Dec(n);
	printf("%d", Sum);
	return 0;
}