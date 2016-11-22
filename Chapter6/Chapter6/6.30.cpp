//6.30

#include <iostream>
using namespace std;

int main()
{
	unsigned long long Num;
	cout << "Please input a integer: ";
	cin >> Num;
	while (Num > 0) {
		cout << Num % 10 << " ";
		Num /= 10;
	}
	cout << endl;
	return 0;
}