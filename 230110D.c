//Input the value of products, half of which and two more are sold per day.
// When the value is an odd number,half of it only retains the interger part.
//Output the days they being sold out.
#include<stdio.h>
int main()
{
	int n = 0, rmn = 0, day = 0, tmp = 0;
	printf("Please input the value of products:");
	scanf_s("%d", &n);
	if (n <= 4)
		printf("\n It only cost 1 day to sold out!\n");
	else
	{
		for (day = 1, rmn = n; rmn > 0; day++)
		{
			tmp = rmn;
			n /= 2;
			rmn = tmp - n - 2;
			if (rmn <= 0)
				printf("\nIt costs %d days to sold out.\n", day);
		}
	}
	return 0;
}