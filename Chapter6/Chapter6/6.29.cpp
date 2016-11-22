//6.29

#include <iostream>
#include <cmath>
using namespace std;

bool _IfPrime(int _Num) {
	for (int i = 2; i <= sqrt(_Num); i++) {
		if (_Num%i == 0) {
			return false;
		}
	}
	return true;
}

int main()
{
	for (int i = 2; i <= 10000; i++) {
		if (_IfPrime(i)) {
			cout << i << "\n";
		}
	}
	return 0;
}