//Output all integers between 200 and 400 that can be divided by 3 ,
//and whose first digit number is 7.
#include<stdio.h>
int main()
{
	int n = 0, i = 0, j = 0;
	for (i = 20; j <= 400; i++)
	{
		j = 10 * i + 7;
		{
			if (j % 3 == 0)
			{
				printf("%d ", j);
				if ((++n) % 5 == 0)
					printf("\n");
			}
		}
	}  
	printf("\n");
	return 0;
}