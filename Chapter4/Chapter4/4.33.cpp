//4.33

#include <iostream>
using namespace std;

int main()
{
	double a, b, c;
	cout << "Please input three numbers: ";
	cin >> a >> b >> c;
	if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {
		cout << "It can be a right triangle.";
	}
	else {
		cout << "It can't be a right triangle.";
	}
	return 0;
}
