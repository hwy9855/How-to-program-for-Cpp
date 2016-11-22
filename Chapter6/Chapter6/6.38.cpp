//6.38

#include <iostream>
using namespace std;

void hanoi(int n, int a, int b, int c) //from a to b through c
{
	if (n == 1) {
		cout << a << "->" << b << endl;
		return;
	}
	else {
		hanoi(n - 1, a, c, b);
		cout << a << "->" << b << endl;
		hanoi(n - 1, c, b, a);
	}
}

int main()
{
	cout << "Please input the number of plates: ";
	int n;
	cin >> n;
	hanoi(n, 1, 3, 2);
	return 0;
}