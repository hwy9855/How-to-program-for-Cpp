//6.18

#include <iostream>
using namespace std;

#define LL long long

LL integerPower(LL base, LL exponent) {
	return(exponent == 0) ? 1 : integerPower(base, exponent - 1)*base;
}

int main()
{
	LL base, exponent;
	cout << "Please input the base : ";
	cin >> base;
	cout << "Please input the exponent : ";
	cin >> exponent;
	cout << base << " ^ " << exponent << " = " << integerPower(base, exponent);
	return 0;
}