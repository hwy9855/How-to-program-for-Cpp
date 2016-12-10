//2.25

#include <iostream>

int main()
{
	using std::cin;
	using std::cout;
	int a, b;
	cout << "Please input two integers: ";
	cin >> a >> b;
	if (a%b) {
		cout << a << " is not a multiple of " << b << "\n";
	}
	else {
		cout << a << " is a multiple of " << b << "\n";
	}
	return 0;
}
