/*
 * main.c
 *
 *  Created on: Jun 9, 2023
 *      Author: tanta
 */
#include <stdio.h>
int main()
{
	float a, b, x;
	printf("enter value of a:");
	fflush(stdin); fflush(stdout);
	scanf("%f",&a);
	printf("enter value of b:");
	fflush(stdin); fflush(stdout);
	scanf("%f",&b);
	x=a;
	a=b;
	b=x;
	printf("After swapping,value of a=%f\rAfter swapping,value of b=%f",a,b);

}

