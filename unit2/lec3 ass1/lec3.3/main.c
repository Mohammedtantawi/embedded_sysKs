/*
 * main.c
 *
 *  Created on: Jun 9, 2023
 *      Author: tanta
 */
#include <stdio.h>
int main()
{
	int integer1, integer2;

printf("enter two integers:");
fflush(stdin); fflush(stdout);
scanf("%d %d", &integer1, &integer2);
int sum = (integer1+integer2);
printf("sum is = %d\r\n",sum);


}


