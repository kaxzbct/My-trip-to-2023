//Bubble sort ten numers.
#include<stdio.h>
int main()
{
	int n[10] = { 0 };
	int i = 0, j = 0, tmp = 0, ret = 0;
	printf("Please input ten integers:");
	for (i = 0; i < 10; i++)
	{
		do
		{
			ret = scanf_s("%d", &n[i]);
			if (ret < 1)
			{
				printf("\nError occurs. Please input again:");
				while (getchar() != '\n');
			}
		} while (ret < 1);
	}
	printf("\n");
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9 - i; j++)
		{
			if (n[j] > n[j + 1])
			{
				tmp = n[j + 1];
				n[j + 1] = n[j];
				n[j] = tmp;
			}
		}
	}
	printf("The order is:");
	for (i = 0; i < 10; i++)
		printf("%d ", n[i]);
	printf("\n");
	return 0;
}