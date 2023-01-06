//Assume that there are three needles A, B and C on a board.
//Needle A is sheathed with 64 discs of different sizes, 
//which are arranged in the order of big ones at the bottom and small ones at the top. 
//To move these 64 discs from needle A to needle C, 
//only one disc can be moved at a time, and needle B can be used in the moving process. 
//At any time, the disc on any needle must keep the big disc at the bottom and the small at the top.
//Input the number of disks to be moved.
//Output the moving process.
#include<stdio.h>
void move(char c1, char c2)
{
	static int mov = 1;
	printf("Step %d:%c-->%c\n", mov++, c1, c2);
}
void	hanoi(int n, char x, char y, char z)
{
	if (n == 1)
		move(x, z, 1);
	else
	{
		hanoi(n - 1, x, z, y);
		move(x, z);
		hanoi(n - 1, y, x, z);
	}
}
int main()
{
	int n = 0;
	printf("Please input the number of disks to be moved:");
	scanf_s("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	return 0;
}