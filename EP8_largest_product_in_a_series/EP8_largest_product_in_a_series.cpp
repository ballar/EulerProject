// EP8_largest_product_in_a_series.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	string line;
	string number;
	int n;
	int k = 13;
	vector<unsigned long long> products;
	unsigned long long max;
	
	ifstream myfile("number.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			number += line;
		}
		myfile.close();
	}
	else cout << "Unable to open file"<< endl;

	n = number.size();
	for (int i = 0; i < n-k; ++i) {
		unsigned long long product = 1;
		for (int j = 0; j < k; ++j) {
			product *= int(number[(i + j)]) - 48;
		}
		products.push_back(product);
	}
	max = products[0];
	for (int i = 1; i < products.size(); i++) {
		if (max < products[i]) {
			max = products[i];
		}
	}

	cout << max << endl;
	cin.get(); cin.get();

	return 0;
}

