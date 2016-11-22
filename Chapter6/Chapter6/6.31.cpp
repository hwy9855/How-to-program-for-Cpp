//6.31

#include <iostream>
using namespace std;

#define LL long long

LL gcd(LL Num1, LL Num2) {
	LL Mod = Num1%Num2;
	if (!Mod)
		return Num2;
	else
		return gcd(Num2, Mod);
}

int main()
{
	LL Num1, Num2, GCD;
	cout << "Please input two integers: ";
	cin >> Num1 >> Num2;
	if (Num1 > Num2) {
		GCD = gcd(Num1, Num2);
	}
	else {
		GCD = gcd(Num2, Num1);
	}
	cout << "The greatest common divisor of the two integer is " << GCD << endl;
	return 0;
}