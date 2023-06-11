/*
 * main.c
 *
 *  Created on: Jun 8, 2023
 *      Author: tantawi
 */

#include <stdio.h>
int main()
{
	int integer;
	scanf("%d",&integer);
	printf("enter a integer: ");
	fflush(stdin); fflush(stdout);
	printf("you entered = %d",integer);
	return 0;
}


