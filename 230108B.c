//e=1+1/1!+ 1/2!+ 1/3!+…
//It ends when the value of the last item is less than 10 ^ - 10.
//Output e.
#include <stdio.h>
int main()
{
	double e = 1, n = 1;
	int i = 1;
	while (1 / n > 1e-10)
	{
		e += 1 / n;
		n *= ++i;
	}
	printf("e=%f\n", e);
	return 0;
}
