//6.20

#include <iostream>
using namespace std;

#define LL long long

bool multiple(LL a, LL b) {
	return !(b%a);
}

int main()
{
	LL a, b;
	cout << "Please input two integers : ";
	while (cin >> a >> b) {
		if (multiple(a, b))
			cout << "true";
		else
			cout << "false";
		cout << "\n";
	}
	return 0;
}