//5.8

#include <iostream>
using namespace std;

int main()
{
	int n,smallest=INT_MAX,k;
	cout << "Please input a integer: ";
	cin >> n;
	cout << "Please input " << n << " integers: ";
	for (int i = 1; i <= n; i++) {
		cin >> k;
		smallest = (smallest > k) ? k : smallest;
	}
	cout << "The smallest is " << smallest << "\n";
	return 0;
}