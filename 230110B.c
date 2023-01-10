//Reverse the characters in the string input, rather than in reverse order.
#include <stdio.h>
#include <string.h>
void Rev(char* str)
{
	size_t len = strlen(str);
	char tmp = *str;
	*str = *(str + len - 1);
	*(str + len - 1) = '\0';
	if (strlen(str + 1) >= 2)
		Rev(str + 1);

	*(str + len - 1) = tmp;
}
int main()
{
	char arr[100] = "0";
	unsigned int a = sizeof(arr);
	printf("Please input a string:");
	scanf_s("%s", arr, a);
	Rev(arr);
	printf("\n%s\n", arr);
	return 0;
}