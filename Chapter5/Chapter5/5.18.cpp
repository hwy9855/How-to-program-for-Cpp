//5.18

#include <iostream>
#include <iomanip>
#include <bitset>
using namespace std;

int main()
{
	cout << setw(3) << "dec" << setw(12) << "bin" << setw(6) << "oct" << setw(5) << "hex" << "\n";
	for (int i = 1; i <= 256; i++) {
		cout << setw(3) << dec << i << setw(12) << bitset<sizeof(int8_t) * 9>(i) << setw(6) << oct << i << setw(5) << hex << i << "\n";
	}
	return 0;
}
