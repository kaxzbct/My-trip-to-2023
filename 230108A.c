//A ball falls freely from a height of 100 meters. 
//After each landing, it bounces back to 
//half of the original height and falls again. 
//Output the total meters it passes in the 10th landing,
//and the height of the 10th rebound.
#include<stdio.h>
int main()
{
	float h = 100, r = 0, sum = 0;
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		r = h / 2;
		if (i < 10)
			sum += h + r;
		else
			sum += h;
		h = r;
	}
	printf("The total meters it passes in the 10th landing is %f\n\n", sum);
	printf("The height of the 10th rebound is %f\n", r);
	return 0;
}