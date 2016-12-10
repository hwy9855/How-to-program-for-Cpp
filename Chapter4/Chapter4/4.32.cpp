//4.32

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	double a[3];
	cout << "Please input three numbers: ";
	cin >> a[0] >> a[1] >> a[2];
	sort(a, a + 3);
	if (a[0] + a[1] > a[2]) {
		cout << "It can be a triangle.";
	}
	else {
		cout << "It can't be a triangle.";
	}
	return 0;
}
