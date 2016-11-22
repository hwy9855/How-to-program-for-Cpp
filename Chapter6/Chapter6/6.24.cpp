//6.24

#include <iostream>
using namespace std;

//Part A
int _Quotient(int a, int b) {
	return a / b;
}

//Part B
int _Modulo(int a, int b) {
	return a % b;
}

//Part C
void _Separate(int _Num) {
	int _Zero = 10000;
	while (_Zero>0) {
		if (_Quotient(_Num, _Zero)) {
			cout << _Quotient(_Num, _Zero) << " ";
		}
		_Num = _Modulo(_Num, _Zero);
		_Zero = _Quotient(_Zero, 10);
	}
	cout << endl;
	return;
}

int main()
{
	cout << "Please input a integers :(1-32767) ";
	int _Num;
	cin >> _Num;
	_Separate(_Num);
	return 0;
}