//4.15

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << fixed;
	cout << setprecision(2);
	float _sales;
	while (1) {
		cout << "Enter sales in dollars (-1 to end): ";
		cin >> _sales;
		if (_sales == -1) {
			break;
		}
		cout << "Salary is: $" << (float)(200 + _sales*0.09) << "\n";
	}
	return 0;
}
