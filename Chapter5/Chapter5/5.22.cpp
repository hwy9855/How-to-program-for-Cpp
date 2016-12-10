//5.22

#include <iostream>
using namespace std;

int main()
{
	int _Num1, _Num2, _Num3;
	cout << "a)Please input two integers x and y: ";
	cin >> _Num1 >> _Num2;
	cout << "!(x<5)&&!(y>=7) = " << (!(_Num1 < 5) && !(_Num2 >= 7)) << endl;
	cout << "!((x<5)||(y>=7)) = " << !((_Num1 < 5) || (_Num2 >= 7)) << endl;
	cout << "b)Please input three integers a,b,g: ";
	cin >> _Num1 >> _Num2 >> _Num3;
	cout << "!(a==b)||!(g!=5) = " << (!(_Num1 == _Num2) || !(_Num3 != 5)) << endl;
	cout << "!((a==b)&&(g!=5)) = " << !((_Num1 == _Num2) && (_Num3 != 5)) << endl;
	cout << "c)Please input two integers x and y: ";
	cin >> _Num1 >> _Num2;
	cout << "!((x<=8)&&(y>4)) = " << !((_Num1 <= 8) && (_Num2 >4 )) << endl;
	cout << "!(x<=8)||!(y>4) = " << (!(_Num1 <= 8) || !(_Num2 > 4)) << endl;
	cout << "d)Please input two integers i and j: ";
	cin >> _Num1 >> _Num2;
	cout << "!((i>4)||(j<=6)) = " << !((_Num1 > 4) || (_Num2 <= 6)) << endl;
	cout << "!(i>4)&&!(j<=6) = " << (!(_Num1 > 4) && !(_Num2 <= 6)) << endl;
	return 0;
}
