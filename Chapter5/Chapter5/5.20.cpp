//5.20

#include <iostream>
#include <iomanip>
using namespace std;

void Pythagorean()
{
	for (int side1 = 1; side1 <= 500; side1++) {
		for (int side2 = side1; side2 <= 500; side2++) {
			for (int hypotenuse = side2; hypotenuse <= 500; hypotenuse++) {
				if (side1*side1 + side2*side2 == hypotenuse*hypotenuse) {
					cout << setw(3) << side1 << setw(4) << side2 << setw(4) << hypotenuse <<endl;
				}
			}
		}
	}
}

int main()
{
	Pythagorean();
	return 0;
}
