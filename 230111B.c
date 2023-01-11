//Given a sequence whose first term is 1, the second term is 2, and the third term is 3. 
//Each subsequent term is equal to the sum of its previous two terms. 
//Calculate the first 20 items of the sequence then output them in reverse order.
#include<stdio.h>
int main()
{
	int n[20] = { 0 };
	int a = 1, b = 2, c = 3, i = 0, tmp = 0;
	for (i = 0; i < 20; i++)
	{
		n[i] = a;
		a = b;
		b = c;
		c = a + b;
	}
	for (i = 0; i < 10; i++)
	{
		tmp = n[19 - i];
		n[19 - i] = n[i];
		n[i] = tmp;
	}
	for (i = 0; i < 20; i++)
		printf("%d ", n[i]);
	return 0;
}
