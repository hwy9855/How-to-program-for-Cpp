//4.27

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "Please input a binary code: ";
	char a[33]={' '};
	int _number=0,counter=0,_p=1;
	cin >> a;
	while (1) {
		if ((int)a[counter]<=47||(int)a[counter]>=59)
                        break;
		counter++;
	}
	counter--;
	while (counter >= 0) {
		_number += (int)(a[counter] - 48)*_p;
		_p *= 2;
		counter--;
	}
	cout << "It is " << _number << "\n";
	return 0;
}
