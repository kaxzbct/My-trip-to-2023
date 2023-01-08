//Input an unsigned integer.
//Output each of its digit in order.
#include<stdio.h>
int print(int N)
{
	if (N >= 10)
		print(N / 10);
	printf("%d ", N % 10);
}
int main()
{
	int n = 0;
	printf("Please input an integer:");
	scanf_s("%d", &n);
	printf("\nIt is ");
	print(n);
	return 0;
}
