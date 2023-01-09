//Find the kth power of n.
#include<stdio.h>
int Pow(int N,int K)
{
	if (K == 0)
		return 1;
	else
		return Pow(N, K - 1) * N;
}
int main()
{
	int n = 0, k = 0;
	printf("Please input the value of n:");
	scanf_s("%d", &n);
	printf("\nPlease input the value of k:");
	scanf_s("%d", &k);
	printf("\n%d^%d=%d\n", n, k, Pow(n, k));
	return 0;
}