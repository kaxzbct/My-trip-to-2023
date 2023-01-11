//Convert decimal number to octal number.
#include<stdio.h>
void Hex(int N)
{
	int i = 0;
	char n[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
	if (N == 0)
		return ;
	else
	{
		i = N % 16;
		Hex(N / 16);
		printf("%c", n[i]);
	}
}
void Oct(int N)
{
	int num = 0;
	if (N == 0)
		return ;
	else
	{
		num = N % 8;
		Oct(N / 8);
		printf("%d", num);
	}
}
void Bin(int N)
{
	int num = 0;
	if (N == 0)
		return ;
	else
	{
		num = N % 2;
		Bin(N / 2);
		printf("%d", num);
	}
}
int main()
{
	int n = 0;
	printf("Please input a decimal number:");
	scanf_s("%d", &n);
	printf("\nBinary:");
	Bin(n);
	printf("\n\nOctal:");
	Oct(n);
	printf("\n\nHexadecimal:");
	Hex(n);
	printf("\n");
	return 0;
}