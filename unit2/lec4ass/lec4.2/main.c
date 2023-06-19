/*
 * main.c
 *
 *  Created on: Jun 14, 2023
 *      Author: tanta
 */

#include <stdio.h>
int main()
{
	int i, n;
	float num[50], sum=0.0, average;
	printf("Enter the numbers of data:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	while (n>50||n<=0)
		{
			printf("Error!! number should in range of (1 to 50).\n");
			fflush(stdin); fflush(stdout);
			printf("Enter the number again:");
			fflush(stdin); fflush(stdout);
			scanf("%d",&n);
		}
	for (i=0;i<n;++i)
	{
		printf("%d.Enter number:",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f",&num[i]);
		sum+=num[i];
	}
	average=sum/n;
	printf("average=%.2f",average);
	return 0;
}
