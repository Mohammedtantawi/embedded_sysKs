/*
 * main.c
 *
 *  Created on: Jun 14, 2023
 *      Author: tanta
 */
#include <stdio.h>
int main()
{
	int a[10][10], b[10][10];
	int i,j,r,c;
	printf("Enter rows and column of matrix:");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&r,&c);
	fflush(stdin); fflush(stdout);
	printf("Enter the elements of matrix:\n");
	fflush(stdin); fflush(stdout);
	for(i=0;i<r;++i)
		for(j=0;j<c;++j)
		{
			printf("Enter element a%d%d:",i+1,j+1);
			fflush(stdin); fflush(stdout);
			scanf("%d",&a[i][j]);
		}
	printf("\nEntered Matrix:\n");
	fflush(stdin); fflush(stdout);
	for(i=0;i<r;++i)
		for(j=0;j<c;++j)
		{
			printf("%d ",a[i][j]);
			fflush(stdin); fflush(stdout);
			if(j==c-1)
				printf("\n\n");
			fflush(stdin); fflush(stdout);
		}
	for(i=0;i<r;++i)
		for(j=0;j<c;++j)
		{
			b[j][i]=a[i][j];
		}
	printf("\nTranspose Of Matrix:\n");
	fflush(stdin); fflush(stdout);
	for(i=0;i<c;++i)
		for(j=0;j<r;++j)
		{
			printf("%d ",b[i][j]);
			fflush(stdin); fflush(stdout);
			if(j==r-1)
				printf("\n\n");
		}
	return 0;
}

