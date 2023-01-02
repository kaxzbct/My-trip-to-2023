//Programming calculation 1!+ 2！+ 3！+…+10!
#include<stdio.h>
int main()
{
	int n = 0, tmp = 1, sum = 0;
	for (n = 1; n <= 10; n++)
	{
		tmp *= n;
		sum += tmp;
	}
	printf("%d", sum);
	return 0;
}