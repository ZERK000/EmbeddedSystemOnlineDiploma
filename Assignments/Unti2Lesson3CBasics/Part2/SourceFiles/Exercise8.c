/*
 * Exercise8.c
 *
 *  Created on: Oct 19, 2023
 *      Author: zizob
 */


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char Operator;
	float FirstNumber, SecondNumber, Result;
	printf("Enter operator either + or - or * or divide: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &Operator);
	printf("Enter two operands: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f", &FirstNumber, &SecondNumber);

	switch (Operator)
	{
	case '+':
		Result = FirstNumber + SecondNumber;
		break;
	case '-':
		Result = FirstNumber - SecondNumber;
		break;
	case '*':
			Result = FirstNumber * SecondNumber;
			break;
	case '/':
			Result = FirstNumber / SecondNumber;
			break;
	}

	printf("%.1f %c %.1f = %.1f", FirstNumber, Operator, SecondNumber, Result);

}
