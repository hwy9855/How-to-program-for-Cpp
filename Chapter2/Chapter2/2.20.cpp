//2.20

#include <iostream>
const float PI = 3.14159;

int main()
{
	using std::cin;
	using std::cout;
	int r;
	cout << "Please input the radius: ";
	cin >> r;
	cout << "The diameter of the circle is " << 2 * r;
	cout << "\nThe circumference of the circle is " << 2 * r * PI;
	cout << "\nThe area of the circle is " << PI*r*r;
	return 0;
}
