// EP6_sum_square_difference.cpp : Defines the entry point for the console application.
//

//The sum of the squares of the first ten natural numbers is, 12 + 22 + ... + 102 = 385
//The square of the sum of the first ten natural numbers is, (1 + 2 + ... + 10)2 = 552 = 3025
//Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 ? 385 = 2640.
//
//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

#include "stdafx.h"
#include <math.h>


int main()
{
	int Sum = 0;
	float SumOfTheSquares = 0;
	float SquareOfTheSum, Difference;
	int DifferenceFromExplicit;
	int n = 100;
	for (int i = 1; i <= n; i++) {
		SumOfTheSquares += i*i;
		Sum += i;
	}

	SquareOfTheSum = Sum*Sum;
	Difference =  SquareOfTheSum - SumOfTheSquares;
	DifferenceFromExplicit = (n*(n + 1) / 2)*(n*(n + 1) / 2) - n*(n + 1)*(2 * n + 1) / 6;
	printf("%f\n%d\n", Difference, DifferenceFromExplicit);

	return 0;
}

