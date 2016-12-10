//2.24

#include <iostream>

int main()
{
	using std::cin;
	using std::cout;
	int k;
	cout << "Please input the integer: ";
	cin >> k;
	cout << k;
	if (k % 2) {
		cout << " is odd\n";
	}
	else {
		cout << " is even\n";
	}
	return 0;
}
