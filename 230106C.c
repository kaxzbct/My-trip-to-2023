//Input the first letter of the day of the week 
//to determine which day is it of the week. 
//If the first letter is the same, 
//Continue to input the second letter to determine.
#include<stdio.h>
int main()
{
	char day = '0', sec1 = '0', sec2 = '0';
	int n = 0;
	printf("Please input the first letter of the day of the week:");
	scanf_s("%c", &day, 1);
	n = getchar();
	switch (day)
	{
	case'm':case'M':
		printf("\nIt's Monday.\n"); break;
	case't':case'T':
		printf("\nIt seems like continuing to input the second letter is needed:");
		scanf_s("%c", &sec1, 1);
		n = getchar();
		if (sec1 == 'h')
			printf("\nIt's Thursday.\n");
		else if (sec1 == 'u')
			printf("\nIt's Tuesday.\n ");
		else
		{
			printf("\nError occurs. Please try again.\n\n");
			main();
		}
		break;
	case'w':case'W':
		printf("\nIt's Wednesday.\n"); break;
	case'f':case'F':
		printf("\nIt's Friday.\n"); break;
	case's':case'S':
		printf("\nIt seems like continuing to input the second letter is needed:");
		scanf_s("%c", &sec2, 1);
		n = getchar();
		if (sec2 == 'a')
			printf("\nIt's Saturday\n");
		else if (sec2 == 'u')
			printf("\nIt's Sunday\n");
		else
		{
			printf("\nError occurs. Please input again.\n\n");
			main();
		}
	default:
		printf("\nError occurs. Please try again.\n\n");
		main();
		break;
	}
	return 0;
}