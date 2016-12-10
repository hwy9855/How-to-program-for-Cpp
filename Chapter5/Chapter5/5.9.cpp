//5.9

#include <iostream>
using namespace std;

int main()
{
	int pro=1;
	for (int i = 1; i <= 15; i+=2) {
		pro *= i;
	}
	cout << "The product of odds between 1 to 15 is " << pro << "\n";
	return 0;
}