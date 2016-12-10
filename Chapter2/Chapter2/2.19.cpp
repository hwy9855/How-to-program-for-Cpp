//2.19

#include <iostream>

int main()
{
	using std::cin;
	using std::cout;
	int a, b, c, sum, _min, _max;
	cout << "Input three different integers: ";
	cin >> a >> b >> c;
	sum = a + b + c;
	cout << "Sum is " << sum;
	cout << "\nAverage is " << sum / 3.0;
	cout << "\nProduct is " << a*b*c;
	if (a > b) {
		_max = a;
		_min = b;
	}
	else
	{
		_max = b;
		_min = a;
	}
	if (_max < c) {
		_max = c;
	}
	if (_min > c) {
		_min = c;
	}
	cout << "\nSmallest is " << _min;
	cout << "\nLargest is " << _max;
	return 0;
}
