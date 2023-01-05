//Input the scores {(60, 70, 65, 75), (75, 80, 75, 90), (95, 75, 90, 65)} of three students in four courses.
//Calculate the total score and average score of each student.
//Output the results with one decimal place.
#include<stdio.h>
int main()
{
	int n[3][4] = { 60, 70, 65, 75, 75, 80, 75, 90, 95, 75, 90, 65 };
	int i = 0, j = 0, sum = 0;
	float ave = (float)sum / 4;
	for (i = 0; i < 3; i++)
	{
		sum = 0;
		for (j = 0; j < 4; j++)
			sum += n[i][j];
		printf("Student %d's total score is %d.", i + 1, sum);
		printf("Average score is %.1f.\n\n", (float)sum / 4);
	}
	return 0;
}