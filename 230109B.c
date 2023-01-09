//Find the nth Fibonacci Number.
#include<stdio.h>
int Fib(int N)
{
	if (N <= 2)
		return 1;
	else
		return Fib(N - 1) + Fib(N - 2);
}
int main()
{
	int n = 0;
	printf("Please input an integer:");
	scanf_s("%d", &n);
	if (n % 10 == 1)
		printf("\nThe %dst Fibonacci number is %d.\n", n, Fib(n));
	else if (n % 10 == 2)
		printf("\nThe %dnd Fibonacci number is %d.\n", n, Fib(n));
	else if (n % 10 == 3)
		printf("\nThe %drd Fibonacci number is %d.\n", n, Fib(n));
	else
		printf("\nThe %dth Fibonacci number is %d.\n", n, Fib(n));
}