//Input the score given to a player by seven judges, 
//Output the average score of the player.
//Remove the highest score and the lowest score, 
//and calculate the average of the remaining five scores.
#include<stdio.h>
int main()
{
	int i = 0, a = 0, b = 0, sum = 0, max = 0, min = 0;
	int n[7] = { 0 };
	printf("Please input the scores given by seven judges:");
	for (i = 0; i < 7; i++)
	{
		scanf_s("%d", &n[i]);
		sum += n[i];
	}
	for (max = n[0], min = n[0], i = 0; i < 7; i++)
	{
		if (max < n[i])
			max = n[i];
		if (min > n[i])
			min = n[i];
	}
	printf("\nThe average score is %.2f.\n", ((float)sum - max - min) / 5);
	return 0;
}