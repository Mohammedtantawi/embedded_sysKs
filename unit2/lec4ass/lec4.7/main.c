/*
 * main.c
 *
 *  Created on: Jun 18, 2023
 *      Author: tanta
 */

#include <stdio.h>
int main()
{
	char s[1000];
	int i;
	printf("Enter the String:");
	fflush(stdin); fflush(stdout);
	scanf("%s",s);
	for (i = 0;s[i]!='\0';++i);
	printf("Length of String is %d",i);
	fflush(stdin); fflush(stdout);
return 0;
}
