//Input a positive integer with no more than 5 digits, 
//Determine how many digits it is, 
//and output each digit in reverse order.
#include<stdio.h>
void judge()
{
	int dgt = 0, n = 0, i = 1, rev = 0, tmp = 0, ret = 0;
	do
	{
		ret = scanf_s("%d", &n);
		if (ret < 1)
		{
			printf("\n");
			printf("Error occurs.Please input again:");
			while (getchar() != '\n');
		}
	} while (ret < 1);
	tmp = n;
	do
	{
		n /= 10;
		dgt++;
	} while (n);
	switch (dgt)
	{
	case 1:case 2:case 3:case 4:case 5:
		printf("\n");
		printf("It is a %d-digit number.\n\n", dgt);
		printf("The reverse order is ");
		for (i = 0; i < dgt; i++)
		{
			rev = tmp % 10;
			tmp /= 10;
			printf("%d", rev);
		}
		printf(".\n"); break;
	default:
		printf("\n");
		printf("Sorry, but the digit is more than 5. Please input again:");
		judge();
		break;
	}
}
int main()
{
	printf("Please input an integer with no more than 5 digits:");
	judge();
	return 0;
}