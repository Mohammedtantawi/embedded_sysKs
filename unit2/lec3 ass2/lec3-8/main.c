/*
 * main.c
 *
 *  Created on: Jun 11, 2023
 *      Author: tanta
 */

#include <stdio.h>
int main()
{
	char o;
	float num1, num2;
	printf("Enter operator either + or - or * or divide:");
	fflush(stdin); fflush(stdout);
	scanf("%c",&o);
	printf("Enter two operands:");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&num1,&num2);
	switch(o)
	{
	case'+':
		printf("%f+%f=%f",num1,num2,num1+num2);
		break ;
	case'-':
		printf("%f-%f=%f",num1,num2,num1-num2);
		break ;
	case'*':
		printf("%f*%f=%f",num1,num2,num1*num2);
		break ;
	case'/':
		printf("%f/%f=%f",num1,num2,num1/num2);
		break ;
	default:
		printf("Error!! operator is not correct");
	}
	return 0;
}

