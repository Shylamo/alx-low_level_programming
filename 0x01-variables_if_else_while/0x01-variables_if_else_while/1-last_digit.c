#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main : entry
 * Description: printing the last digit
 * */
int main(void)
{
	int n, num = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	num = % n;
	printf("the last digit is %d", num);
	return (0);
}
