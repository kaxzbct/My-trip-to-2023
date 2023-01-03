//A total of 50 coins are exchanged for 5 cents, 2 cents and 1 cent with 1 yuan.
//At least one coin of each kind. 
//How many exchange schemes are there? 
//Output the number of three coins in each scheme.
#include<stdio.h>
int main()
{
	int x = 1, y = 1, z = 1, n = 0;
	printf("              5 cents   2cents   1cent\n");
	for (x = 1; x <= 18; x++)
	{
		for (y = 1; y <= 48; y++)
		{
			for (z = 1; z <= 48; z++)
			{
				if ((x * 5 + y * 2 + z * 1 == 100) && (x + y + z == 50))
				{
					printf("scheme %2d%9d%9d%9d\n", ++n, x, y, z);
				}
			}
		}
	}
	return 0;
}