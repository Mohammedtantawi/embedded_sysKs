/*
 * main.c
 *
 *  Created on: Jun 9, 2023
 *      Author: tanta
 */
#include <stdio.h>
int main()
{
	float a, b, product;
	printf("enter two numbers:");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&a, &b);
	product = (a*b);
	printf("product:%f\r\n",product);
	return 0;
}

