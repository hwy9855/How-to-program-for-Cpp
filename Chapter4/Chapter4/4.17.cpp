//4.17

#include <iostream>
using namespace std;

int main()
{
	cout << "Please input ten integers: ";
	int counter=1, number, largest=-INT_MAX;
	while (counter <= 10) {
		cin >> number;
		largest = (largest > number) ? largest : number;
		counter++;
	}
	cout << "The largest of these numbers is " << largest << "\n";
	return 0;
}