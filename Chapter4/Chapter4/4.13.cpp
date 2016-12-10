//4.13

#include <iostream>
#include <iomanip>

int main()
{
	using std::cin;
	using std::cout;
	using std::setprecision;
	using std::fixed;
	cout << fixed;
	cout << setprecision(6);
	double _miles, _gallons, _totalMiles = 0, _totalGallons = 0;
	while (1) {
		cout << "Enter miles driven (-1 to quit): ";
		cin >> _miles;
		if (_miles == -1) {
			break;
		}
		cout << "Enter gallons used: ";
		cin >> _gallons;
		_totalMiles += _miles;
		_totalGallons += _gallons;
		cout << "MPG this trip: " << _miles/_gallons << "\n";
		cout << "Total MPG: " << _totalMiles/_totalGallons << "\n";
	}
	return 0;
}
