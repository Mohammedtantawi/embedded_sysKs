/*
 * main.c
 *
 *  Created on: Jun 11, 2023
 *      Author: tanta
 */

#include <stdio.h>
int main()
{
	float num;
	printf("enter the number you want to cheek:");
	fflush(stdin); fflush(stdout);
	scanf("%f",&num);
	if(num>0)
		printf("%f : is positive.",num);
	else if(num<0)
		printf("%f : is negative.",num);
	else
		printf("you earned zero.");
	return 0;
}
