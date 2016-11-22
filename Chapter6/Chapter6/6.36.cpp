//6.36

#include <iostream>
using namespace std;

#define ULL unsigned long long

ULL power(ULL base, int exponent) {
	if (exponent == 1) {
		return base;
	}
	else {
		return base*power(base, exponent - 1);
	}
}

int main()
{
	cout << "Please input two integers: ";
	ULL base;
	int exponent;
	cin >> base >> exponent;
	cout << "base^exponent = " << power(base, exponent);
	return 0;
}