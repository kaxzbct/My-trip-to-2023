//Output the sum of integers between 1 to 200 that cannot be divided by 3.
#include<stdio.h>
int main()
{
	int n = 0, sum = 0;
	for (n = 1; n <= 200; n++)
	{
		if (n % 3 != 0)
			sum += n;
	}
	printf("%d", sum);
	return 0;
}