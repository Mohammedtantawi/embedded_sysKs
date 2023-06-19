/*
 * main.c
 *
 *  Created on: Jun 18, 2023
 *      Author: tanta
 */
#include <stdio.h>
int main()
{
	int arr[50], i, pos, x, n;
	printf("\n Enter no of elements:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n Enter the element to be inserted:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);
	printf("\n Enter the position:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&pos);
	for(i=n;i>=pos;i--)
	{
		arr[i]=arr[i-1];
	}
	n++;
	arr[pos-1]=x;
	for(i=0;i<n;i++)
	{
		printf("\n %d",arr[i]);
	}
	return 0;
}

