/*
 * main.c
 *
 *  Created on: Jun 11, 2023
 *      Author: tanta
 */
#include <stdio.h>
int main()
{
	char c;
	printf("enter a character:");
	fflush(stdin); fflush(stdout);
	scanf("%c",&c);
if((c>='a'&& c<='z')|| (c>='A'&& c<='Z'))
	printf("%c is an alphabet:",c);
else
	printf("%c is not an alphabet",c);
return 0;

}
