//5.19

#include <iostream>
using namespace std;

int main() {
	double Pi = 0;
	for (int i = 1; i <= 1000; i++) {
		Pi = (i % 2) ? (Pi + 4.0 / (i * 2 - 1)) : (Pi - 4.0 / (i * 2 - 1));
		cout << Pi << endl;
	}
	return 0;
}
