// EP7_10001st_prime.cpp : Defines the entry point for the console application.
//

//By listing the first six prime numbers : 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
//
//What is the 10 001st prime number ?

#include <math.h>
#include <vector>
#include <iostream>

bool IsPrime(int x, std::vector<int> vr);

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

	std::cin.get(); std::cin.get();

	return 0;
}

bool IsPrime(int x, std::vector<int> vr)
{
	auto x_sqrt = sqrt((double)x);
	for (int i = 0; vr[i] <= x_sqrt; ++i) {
		if ((x % vr[i]) == 0) {
			return false;
		}
	}
	return true;
}
