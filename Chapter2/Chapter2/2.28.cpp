//2.28

#include <iostream>

int main()
{
	using std::cin;
	using std::cout;
	int a; //a is a five-digital integer
	int zeros = 10000;
	cout << "Please input a five-digital integer: ";
	cin >> a;
	for (int i = 1; i <= 5; i++) {
		cout << a / zeros << " ";
		a -= zeros * (a / zeros);
		zeros /= 10;
	}
	return 0;
}
