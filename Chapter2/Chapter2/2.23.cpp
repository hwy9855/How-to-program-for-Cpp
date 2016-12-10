//2.23

#include <iostream>
const int inf = 10000007;

int main()
{
	using std::cin;
	using std::cout;
	int k, _max = -inf, _min = inf;
	cout << "Please input five integers: ";
	for (int i = 1; i <= 5; i++) {
		cin >> k;
		_max = (_max < k ? k : _max);
		_min = (_min > k ? k : _min);
	}
	cout << _max << " is the largest\n";
	cout << _min << " is the smallest\n";
	return 0;
}
