//2.27

#include <iostream>

int main()
{
	using std::cin;
	using std::cout;
	char a;
	cout << "Please input a character: ";
	cin >> a;
	cout << "The integer equivalent of " << a << " is " << static_cast<int>(a) << "\n";
	return 0;
}
