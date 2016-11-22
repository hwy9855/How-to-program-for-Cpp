//6.51

#include <iostream>
using namespace std;

int tripleByValue(int count) {
	return 3 * count;
}

void tripleByReference(int & count) {
	count *= 3;
	return;
}

int main()
{
	int count;
	cout << "Please input an integer count: ";
	cin >> count;
	cout << "count's value is " << count << "\n";
	cout << "triple times of count is " << tripleByValue(count) << "\n";
	cout << "count's value is " << count << "\n";
	tripleByReference(count);
	cout << "Now count's value is " << count << "\n";
	return 0;
}