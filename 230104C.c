//Calculate the value of 1 * 2 * 3+4 * 5 * 6+...+97 * 98 * 99.
#include<stdio.h>
int main()
{
	int a = 0, b = 0, c = 0, i = 0, sum = 0;
	for (a = 1, b = 2, c = 3; a <= 97; a += 3, b += 3, c += 3)
		sum += a * b * c;
	printf("1*2*3+4*5*6+...+97*98*99=%d", sum);
	return 0;
}