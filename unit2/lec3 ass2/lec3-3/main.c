/*
 * main.c
 *
 *  Created on: Jun 11, 2023
 *      Author: tanta
 */
#include <stdio.h>
int main()
{
	float a, b, c;
	printf("enter three numbers you want to cheek:");
	fflush(stdin); fflush(stdout);
	scanf("%f %f %f",&a,&b,&c);
	if(a>=b&&a>=c)
		printf("largest number = %f",a);
	else if(b>=a&&b>=c)
		printf("largest number = %f",b);
	else
		printf("largest number = %f",c);
	return 0;
}

