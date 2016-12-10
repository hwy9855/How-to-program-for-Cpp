//4.14

#include <iostream>
#include <iomanip>

struct bank {
	int ID;
	float _balance;
	float _charges;
	float _credits;
	float _creditlimit;
};
int main()
{
	using std::cin;
	using std::cout;
	using std::setprecision;
	using std::fixed;
	cout << fixed;
	cout << setprecision(2);
	while (1) {
		float NB;
		bank _Ac;
		cout << "Enter account number (or -1 to quit): ";
		cin >> _Ac.ID;
		if (_Ac.ID == -1) {
			break;
		}
		cout << "Enter beginning balance: ";
		cin >> _Ac._balance;
		cout << "Enter total charges: ";
		cin >> _Ac._charges;
		cout << "Enter total credits: ";
		cin >> _Ac._credits;
		cout << "Enter credit limit: ";
		cin >> _Ac._creditlimit;
		NB = _Ac._balance + _Ac._charges - _Ac._credits;
		if (NB > _Ac._creditlimit) {
			cout << "New balance is " <<  NB << "\n";
			cout << "Account: " << _Ac.ID << "\n";
			cout << "Credit limit: " << _Ac._creditlimit << "\n";
			cout << "Balance: " << NB << "\n";
			cout << "Credit Limit Exceeded.\n";
		}
	}
	return 0;
}
