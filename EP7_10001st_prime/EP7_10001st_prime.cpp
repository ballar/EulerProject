// EP7_10001st_prime.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <vector>

bool IsPrime(double x, std::vector<int> vr);

int main()
{
	int i = 2;
	int n = 10001;
	std::vector<int> primes(1, 2);
	while (primes.size() < n) {
		i++; 
		if (IsPrime(i, primes)) {
			primes.push_back(i);
		}
	}
	
	printf("%d\n", i);

	return 0;
}

bool IsPrime(double x, std::vector<int> vr)
{
	int n = vr.size();
	for (int i = 0; i < n; i++) {
		if (remainder(x, vr[i]) == 0) {
			return false;
		}
	}
	return true;
}
