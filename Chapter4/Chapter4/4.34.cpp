//4.34

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cout << "Please input a number: ";
	cin >> n;
	unsigned long long sum = 1, form[100] = {1};
	for (int i = 1; i <= n; i++) {
		sum *= i;
		form[i] = sum;
	}
	cout <<"a) " << n << "! = " << sum << "\n";
	double _e = 1;
	for (int i = 1; i <= n; i++) {
		_e += 1.0 / form[i];
	}
	cout << "b) e = " << _e << "\n";
	double _ex = 1;
	for (int i = 1; i <= n; i++) {
		_ex += pow(n,i) / form[i];
	}
	cout << "c) e^x = " << _ex << "\n";
	return 0;
}
