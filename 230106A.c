//Input a number to determine whether it is palindrome number.
#include <stdio.h>
int main()
{
	int num, x, y = 0;
	printf("Please input a number：");
	scanf_s("%d", &num);
	x = num;
	while (x > 0)
	{
		y =y*10+x % 10;
		x /= 10;
	}
	if (num == y)
		printf("\n%d is a palindrome number.\n", num);
	else
		printf("\n%d is not a palindrome number.\n", num);
	return 0;
}
