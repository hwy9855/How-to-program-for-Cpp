//6.25

#include <iostream>
using namespace std;

#define Uint unsigned int

Uint _ReturnSeconds(Uint H, Uint Min, Uint Sec) {
	return H * 3600 + Min * 60 + Sec;
}

Uint _Abs(Uint a, Uint b) {
	return a > b ? a - b : b - a;
}

int main()
{
	Uint hours, min, sec, tot1, tot2;
	cout << "Please input the first time as three unsigned integers (h,m,s): ";
	cin >> hours >> min >> sec;
	tot1 = _ReturnSeconds(hours, min, sec); 
	cout << "Please input the second time as three unsigned integers (h,m,s): ";
	cin >> hours >> min >> sec;
	tot2 = _ReturnSeconds(hours, min, sec);
	cout << "the difference between the two time is " << _Abs(tot1,tot2) << " seconds.\n";
	return 0;
}