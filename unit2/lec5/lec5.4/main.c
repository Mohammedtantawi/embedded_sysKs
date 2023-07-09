/*
 * main.c
 *
 *  Created on: Jul 9, 2023
 *      Author: tanta
 */
#include<stdio.h>
int power(int n1,int n2);
int main()
{
	int base, exp;
	printf("Enter base number:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&base);
	printf("Enter power number(positive integer):");
	fflush(stdin); fflush(stdout);
	scanf("%d",&exp);
	printf("%d^%d=%d",base,exp,power(base,exp));
	return 0;
}

int power(int base, int exp) {
	if (exp == 0)
	{
		return 1;
	} else {
		return base * power(base, exp - 1);
	}
}
