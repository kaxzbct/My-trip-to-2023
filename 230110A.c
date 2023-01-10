//Find the length of a string.
#include<stdio.h>
int Strlen(char* str)
{
	if (*str != '\0')
		return 1 + Strlen(str + 1);
	else
		return 0;
}
int main()
{
	char arr[100] = "abc";
	unsigned int a = sizeof(arr);
	printf("Please input a string:");
	scanf_s("%s", arr, a);
	printf("\nIt's %d characters long.\n", Strlen(arr));
	return 0;
}