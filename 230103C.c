//Input the radius of the circle
//Output the area and circumference of the circle.
//The result is required to retain two decimal places.
#include<stdio.h>
#define PI 3.14
int main()
{
	int r = 0, ret = 0;
	printf("Please input the radius of circle:");
	do
	{
		ret = scanf_s("%d", &r);
		if (ret < 1)
		{
			while (getchar() != '\n');
			printf("\nError occurs. Please input again:");
		}
	} while (ret < 1);
	printf("\nThe circumference of the circle is %.2f.\n\n", 2 * PI * r);
	printf("The area of the circle is %.2f.\n\n", PI * r * r);
	return 0;
}