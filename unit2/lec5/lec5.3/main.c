/*
 * main.c
 *
 *  Created on: Jul 9, 2023
 *      Author: tanta
 */

#include<stdio.h>
void Reverse();
int main()
{
	printf("Enter a sentence:");
	fflush(stdin); fflush(stdout);
	Reverse();
	return 0;
}
void Reverse()
{
	char c;
	scanf("%c",&c);
	if(c!='\n')
	{
		Reverse();
		printf("%c",c);
	}
}
