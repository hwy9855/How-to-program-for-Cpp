//4.20

#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	while (a != 2 && a != 1) {
		cout << "Please input a integer: ";
		cin >> a;
	}
	cout << "Now you input the correct one.\n";
	return 0;
}