/*
 * main.c
 *
 *  Created on: Jun 18, 2023
 *      Author: tanta
 */
#include <stdio.h>
int main()
{
	int arr[50], i, x, n;
	printf("\nEnter no of elements:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nEnter the element to be searched:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);
	i=0;
	while(i<n&&x!=arr[i])
	{
		i++;
	}
	if(i<n)
	{
		printf("Number found at the location=%d",i+1);

	}
	else {
		printf("Number not found");
	}
	return 0;
}

