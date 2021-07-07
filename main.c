/* Version: 3.7 */

#include <stdio.h>

void printSum(int x, int y)
{
	printf("x + y = %d \n", x + y);
}

void printDiff(int x, int y)
{
	printf("x - y = %d \n", x - y);
}

void main(void)
{
	printSum(5,8);
    printDiff(10,5);
}
