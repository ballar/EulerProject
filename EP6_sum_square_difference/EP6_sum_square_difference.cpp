// EP6_sum_square_difference.cpp : Defines the entry point for the console application.
//

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

