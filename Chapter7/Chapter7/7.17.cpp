//7.17

#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
	int t[13] = { 0,0,0,0,0,0,0,0,0,0,0,0,0 };
	srand(time(0));
	int a, b;
	for (int i = 1; i <= 36000; i++) {
		a = rand() % 6 + 1;
		b = rand() % 6 + 1;
		switch (a + b) {
		case 2:t[2]++; break;
		case 3:t[3]++; break;
		case 4:t[4]++; break;
		case 5:t[5]++; break;
		case 6:t[6]++; break;
		case 7:t[7]++; break;
		case 8:t[8]++; break;
		case 9:t[9]++; break;
		case 10:t[10]++; break;
		case 11:t[11]++; break;
		case 12:t[12]++; break;
		}
	}
	cout << "Sum" << setw(7) << "Times" << endl;
	for (int i = 2; i <= 12; i++) {
		cout << setw(3) << i << setw(7) << t[i] << endl;
	}
	return 0;
}