//6.37

#include <iostream>
using namespace std;

double Fibonacci(const int n) {
	double Fibonacci[10000];
	Fibonacci[1] = 0;
	Fibonacci[2] = 1;
	for (int i = 3; i <= n; i++) {
		Fibonacci[i] = Fibonacci[i - 1] + Fibonacci[i - 2];
	}
	return Fibonacci[n];
}

int maxfi() {
	double Fib[100];
	Fib[1] = 0;
	Fib[2] = 1;
	int i = 3;
	while (Fib[i - 1] + Fib[i - 2] < INT_MAX) {
		Fib[i] = Fib[i - 1] + Fib[i - 2];
		++i;
	}
	return Fib[i-1];
}

int main()
{
	cout << "The biggest Fibonacci number below INT_MAX is " << maxfi() << endl;
	int n;
	cout << "Please input an integer n: ";
	cin >> n;
	cout << "Fibonacci(" << n << ") = " << Fibonacci(n) << endl;
	return 0;
}