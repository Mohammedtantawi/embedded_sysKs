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
	printf("enter an alphabet you want to cheek:");
	fflush(stdin); fflush(stdout);
	scanf("%c" ,&c);
	if (c=='a'||c=='A'||c=='e'||c=='E'||c=='o'||c=='O'||c=='u'||c=='U'||c=='i'||c=='I')
		printf("%c is a vowel",c);
	else
		printf("%c is consonant",c);
	return 0;

}
