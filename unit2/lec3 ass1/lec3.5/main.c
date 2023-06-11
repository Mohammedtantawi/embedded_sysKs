/*
 * main.c
 *
 *  Created on: Jun 9, 2023
 *      Author: tanta
 */

#include <stdio.h>
int main()
{
	char ch;
	printf("enter a character:");
	fflush(stdin); fflush(stdout);
	scanf("%c",&ch);
	printf("ASCII value of %c = %d\r\n",ch ,ch);
	return 0;

}
