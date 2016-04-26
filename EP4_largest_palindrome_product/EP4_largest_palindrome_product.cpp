// EP4_largest_palindrome_product.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <stdio.h>

bool IsPalindrome(int x);

int main()
{
	std::vector<int> products;
	
	for (int i = 100; i < 1000; i++) {
		for (int j = i; j < 1000; j++) {
			int prod = i * j;
			if (IsPalindrome(prod)) {
				products.push_back(prod);
			}
		}
	}

	int max = products[0];
	int n = products.size();
	for (int i = 1; i < n; i++) {
		if (max < products[i]) {
			max = products[i];
		}
	}

	printf("%d\n",max);

    return 0;
}

bool IsPalindrome(int x)
{
	char buffer[8];
	int n = sprintf_s(buffer, 8, "%d", x);
	for (int i = 0; i < n / 2; i++) {
		if (buffer[i] != buffer[n - 1 - i]) {
			return false;
		}
	}
	return true;
}
