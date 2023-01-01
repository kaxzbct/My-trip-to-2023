//Input the height and bottom radius of the cylinder.
//Output the surface area and volume of the cylinder. 
//The results are required to retain two decimal places.
#include<stdio.h>
#define PI 3.14
int main()
{
	int h = 0, r = 0;
	float area = 0, volume = 0;
	printf("Please input the height of the cylinder:");
	scanf_s("%d", &h);
	printf("\n");
	printf("Please input the bottom radius of the cylinder:");
	scanf_s("%d", &r);
	printf("\n");
	area = 2 * PI * r * ((double)(r + h));
	volume = PI * r * r * h;
	printf("The surface area of the cylinder is %.2f\n", area);
	printf("\n");
	printf("The volume of the cylinder is %.2f\n", volume);
}