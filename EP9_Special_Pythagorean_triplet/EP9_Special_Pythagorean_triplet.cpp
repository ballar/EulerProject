// EP9_Special_Pythagorean_triplet.cpp : Defines the entry point for the console application.
//

//A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
//
//	a2 + b2 = c2
//	For example, 32 + 42 = 9 + 16 = 25 = 52.
//
//	There exists exactly one Pythagorean triplet for which a + b + c = 1000.
//	Find the product abc. 

#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int x, y, z;

	for (int t = 1; t < 23; ++t){
		for (int s = t + 1; s <= 23; ++s){
			for (int d = 1; d * s * s <= 500; ++d){
				x = 2 * d * s * t;
				y = d * (s * s - t * t);
				z = d * (s * s + t * t);
				if ( (x + y + z) == 1000 ){
					cout << "solution: " << x * y * z << endl;
					cout << "s, t, d: " << s << ", " << t << ", " << d << endl;
					cout << "x, y, z: " << x << ", " << y << ", " << z << endl;
					goto stop;
				}
			}
		}
	}

	cout << "no solution" << endl;

	stop:
	cin.get(); cin.get();

	return 0;
}

