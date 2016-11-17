//6.12

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double Comp(double k) {
	if (k > 10.0) {
		return 10.0;
	}
	return k;
}

int main()
{
	cout << fixed;
	double _ParkHour[3],_Charge[3],_Total=0;
	cout << "Please Input the first customer's parking time : "; cin >> _ParkHour[0];
	cout << "Please Input the second customer's parking time : "; cin >> _ParkHour[1];
	cout << "Please Input the third customer's parking time : "; cin >> _ParkHour[2];
	for (int i = 0; i < 3; i++) {
		if (_ParkHour[i] <= 3) {
			_Charge[i] = 2.0;
		}
		else {
			_Charge[i] = Comp(ceil(_ParkHour[i] - 3) / 2.0 +2);
		}
		_Total += _Charge[i];
	}
	cout << "Car" << setw(12) << "Hours" << setw(13) << "Charge\n";
	for (int i = 0; i < 3; i++) {
		cout << i + 1 << setw(14) <<setprecision(1) << _ParkHour[i] << setw(12) << setprecision(2) << _Charge[i] << "\n";
	}
	cout << "Total" << setw(10) << setprecision(1) << _ParkHour[0] + _ParkHour[1] + _ParkHour[2] << setw(12) << setprecision(2) << _Total << "\n";
	return 0;
}