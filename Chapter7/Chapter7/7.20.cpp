//7.20

#include <iostream>
using namespace std;
int n, _ifavalible[11] = { 0,0,0,0,0,0,0,0,0,0,0 };

bool _seatordered() {
	int sum = 0;
	for (int i = 1; i <= 10; i++) {
		sum += _ifavalible[i];
	}
	if (sum == 10) {
		return false;
	}
	else {
		return true;
	}
}

int main()
{
	int Eco = 6, FC = 1;
	char fl;
	while (_seatordered()) {
		cout << "Please type 1 for \"First Class\" \n";
		cout << "Please type 2 for \"Economy\" \n";
		cin >> n;
		if (n == 1) {
			if (FC != 6) {
				cout << "Your seat is No." << FC << " and it's a First Class seat.\n";
				_ifavalible[FC++] = 1;
			}
			else {
				cout << "The First Class seat is full. Could you please choose the Economy seat? (Y/N) : ";
				cin >> fl;
				if (fl == 'Y') {
					cout << "Your seat is No." << Eco << " and it's a Economy seat.\n";
					_ifavalible[Eco++] = 1;
				}
				if (fl == 'N') {
					cout << "Next flight leaves 3 hours.\n";
				}
			}
		}
		else if (n == 2) {
			if (Eco != 11) {
				cout << "Your seat is No." << Eco << " and it's a Economy seat.\n";
				_ifavalible[Eco++] = 1;
			}
			else {
				cout << "The Economy seat is full. Could you please choose the First Class seat? (Y/N) : ";
				cin >> fl;
				if (fl == 'Y') {
					cout << "Your seat is No." << FC << " and it's a First Class seat.\n";
					_ifavalible[FC++] = 1;
				}
				if (fl == 'N') {
					cout << "Next flight leaves 3 hours.\n";
				}
			}
		}
		cout << endl;
	}
	cout << "Next flight leaves 3 hours.\n";
	return 0;
}