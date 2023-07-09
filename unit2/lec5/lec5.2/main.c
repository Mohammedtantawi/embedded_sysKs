/*
 * main.c
 *
 *  Created on: Jul 9, 2023
 *      Author: tanta
 */

#include<stdio.h>
int factorial(int n);
int main()
{
	int n;
	printf("Enter an positive integer:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	printf("factorial of %d = %1d", n, factorial(n));
	return 0;
}
int factorial(int n)
{
	if(n!=1)
	return n*factorial(n-1);

}

