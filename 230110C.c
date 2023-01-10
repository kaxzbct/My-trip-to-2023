//It is known that the four-digit number 3025 has a special property: 
//the sum of its first two digits 30 and the last two digits 25 is 55, 
//and the square of 55 is just equal to the number 3025.
//Output all four-digit numbers with this property.
#include<stdio.h>
int main()
{
	int n = 0, m = 0, i = 0, sum = 0;
	for (i = 1000; i <= 9999; i++)
	{
		m = i / 100;
		n = i % 100;
		sum = m + n;
		if (sum * sum == i)
			printf("%d ", i);
	}
	printf("\n");
	return 0;
}