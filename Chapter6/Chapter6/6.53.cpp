//6.53

#include <iostream>
using namespace std;

template <class T>
T minimum(T a, T b) {
	return a > b ? b : a;
}

int main()
{
	int inta, intb;
	cout << "Please input two integers a and b: ";
	cin >> inta >> intb;
	cout << "The minimum of the two integers is " << minimum(inta, intb) << endl;
	//integer
	char cha, chb;
	cout << "Please input two characters a and b: ";
	cin >> cha >> chb;
	cout << "The minimum of the two characters is " << minimum(cha, chb) << endl;
	//character
	float floata, floatb;
	cout << "Please input two floats a and b: ";
	cin >> floata >> floatb;
	cout << "The minimum of the two floats is " << minimum(floata, floatb) << endl;
	//float
	return 0;
}
