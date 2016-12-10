//2.18

#include <iostream>

int main()
{
	using std::cin;
	using std::cout;
	int a, b;
	cout << "please input two integers :";
	cin >> a >> b;
	if(a==b)
	{
		cout << "These numbers are equal.";
	}
	else
	{
		cout << (a > b ? a : b) << " is larger.";
	}
	return 0;
}
