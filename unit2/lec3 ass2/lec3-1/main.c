/*
 * main.c
 *
 *  Created on: Jun 11, 2023
 *      Author: tanta
 */
#include <stdio.h>
int main()
{
	int num;
	printf("enter an integer you want to cheek:");
	fflush(stdin); fflush(stdout);
	scanf("%d" ,&num);
	if((num%2)==0)
		printf("%d is even.",num);
	else
		printf("%d is odd.",num);
	return 0;

}

