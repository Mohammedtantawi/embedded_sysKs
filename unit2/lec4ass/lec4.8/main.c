/*
 * main.c
 *
 *  Created on: Jun 18, 2023
 *      Author: tanta
 */

#include <stdio.h>
#include <string.h>
int main()
{
	char str[1000], temp;
	int i, j;
	printf("Enter a string:");
	fflush(stdin); fflush(stdout);
	gets(str);
	i=0;
	j=strlen(str)-1;
	while(i<j)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
	printf("Reverse string is:%s",str);
	return 0;
}
