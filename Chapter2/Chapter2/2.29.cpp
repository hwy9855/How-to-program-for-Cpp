//2.29

#include <iostream>

int main()
{
	using std::cout;
	cout << "integer\tsquare\tcube\t\n";
	for (int i = 0; i <= 10; i++) {
		cout << i << "\t" << i*i << "\t" << i*i*i << "\t\n";
	}
	return 0;
}
