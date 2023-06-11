/*
 * main.c
 *
 *  Created on: Jun 11, 2023
 *      Author: tanta
 */

#include <stdio.h>
int main()
{
	int n, count, sum=0;
	printf("enter an integer:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	for(count=1;count<=n;++count)
	{
		sum+=count;
	}
	printf("sum = %d",sum);
	return 0;
}
