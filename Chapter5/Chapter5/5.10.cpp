//5.10

#include <iostream>
using namespace std;

int main()
{
	int pro = 1;
	for (int i = 1; i <= 5; i++) {
		pro *= i;
		cout << i << "\t" << pro << "\n";
	}
	return 0;
}