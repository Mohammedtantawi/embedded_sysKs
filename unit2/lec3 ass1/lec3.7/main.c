/*
 * main.c
 *
 *  Created on: Jun 9, 2023
 *      Author: tanta
 */
#include <stdio.h>
int main()
{
	int a , b;
	printf("enter value of a:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&a);
	printf("enter value of b:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("After swapping,value of a=%d\rAfter swapping,value of b=%d",a,b);
}

