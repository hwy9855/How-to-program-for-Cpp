//4.26

#include <iostream>
using namespace std;

int main()
{
	cout << "Please input a five-digit integer: ";
	char Num[5];
	cin >> Num;
	if (Num[0] == Num[4] && Num[1] == Num[3]) {
		cout << "The integer is a palindrome.\n";
	}
	else {
		cout << "The integer is not a palindrome.\n";
	}
	return 0;
}