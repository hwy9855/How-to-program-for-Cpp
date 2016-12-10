//5.11

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double  principal;
	cout << fixed << setprecision(2);
	for (double rate = 1.05; rate <= 1.1; rate += 0.01) {
                cout << "Year" << setw(21) << "Amount on deposit           rate = " << rate-1 <<"\n";
		principal = 1000.0;
		for (int i = 1; i <= 10; i++) {
			principal *= rate;
			cout << setw(4) << i << setw(21) << principal << "\n";
		}
	}
	return 0;
}
