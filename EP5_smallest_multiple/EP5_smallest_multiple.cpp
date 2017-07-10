// EP5_smallest_multiple.cpp : Defines the entry point for the console application.
//

//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
//
//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20 ?

#include <math.h>
#include <iostream>
using namespace std;

bool Oszthato(float x);

int main()
{
	float i = 20.0;
	while (Oszthato(i) == false) {
		i += 20;
	}

	printf("%f\n", i);
	cin.get(); cin.get();

	return 0;
}

bool Oszthato(float x)
{
	for (int i = 2; i < 20; i++) {
		if (remainder(x, i) != 0) {
			return false;
		}
	}
	return true;
}
