//7.29

#include <iostream>
#include <cstring>
using namespace std;

const int _Size = 1000;

bool Sieve[_Size];

int main()
{
	int tmp = 0;
	memset(Sieve, true, sizeof(Sieve));
	for (int i = 2; i < _Size; i++) {
		if (Sieve[i]) {
			cout << i << " ";
			tmp = 2 * i;
			while (tmp < 1000) {
				Sieve[tmp += i] = false;
			}
		}
	}
	return 0;
}
