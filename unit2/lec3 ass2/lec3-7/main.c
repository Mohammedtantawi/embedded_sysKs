/*
 * main.c
 *
 *  Created on: Jun 11, 2023
 *      Author: tanta
 */

#include <stdio.h>
int main()
{
	int n, count;
	unsigned int factorial=1;
	printf("enter an integer:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	if(n<0)
		printf("Error !!! Factorial of negative number does not exist.");
	else
	{
		for(count=1;count<=n;++count)
		{
			factorial*=count;
		}
		printf("Factorial = %u",factorial);
	}
	return 0;
}
