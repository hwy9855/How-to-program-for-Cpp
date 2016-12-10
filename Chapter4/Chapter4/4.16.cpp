//4.16

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << fixed;
	cout << setprecision(2);
	int _workhours;
	float _rate;
	while (1) {
		cout << "Enter hours worked (-1 to end): ";
		cin >> _workhours;
		if (_workhours == -1) {
			break;
		}
		cout << "Enter hourly rate of the employee ($00.00): ";
		cin >> _rate;
		if (_workhours > 40) {
			cout << "Salary is $" << (40 * _rate + (_workhours - 40)*_rate*1.5) << "\n";
		}
		else {
			cout << "Salary is $" << _workhours*_rate << "\n";
		}
	}
	return 0;
}