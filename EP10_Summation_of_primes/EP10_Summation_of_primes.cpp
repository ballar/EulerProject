// EP10_Summation_of_primes.cpp : Defines the entry point for the console application.
//

//The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
//
//Find the sum of all the primes below two million.

#include <iostream>
#include <math.h>
#include <vector>

#include <time.h> 
using namespace std;

bool IsPrime(int x, const std::vector<int>& vr){
	auto x_sqrt = sqrt((double)x);
	for (int i = 0; vr[i] <= x_sqrt; ++i) {
		if ((x % vr[i]) == 0) {
			return false;
		}
	}
	return true;
}


int main(int argc, char* argv[])
{
	int i = 5;
	unsigned long long sum = 5;
	int n = 2000000;
	vector<int> primes(1, 3);
	
	while (i < n) {
		if (IsPrime(i, primes)) {
			primes.push_back(i);
			sum += i;
		}
		i += 2;
	}

	cout << sum << endl;
	
	return 0;
}