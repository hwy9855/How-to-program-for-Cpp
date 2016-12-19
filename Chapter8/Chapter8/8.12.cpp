//8.12

#include <iostream>
#include <ctime>
using namespace std;

int moveTortoise(int Tstep)
{
	int per;
	per = rand() % 9 + 1;
	switch (per) {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		Tstep += 3; break;
	case 6:
	case 7:
		Tstep -= 6; break;
	default:
		Tstep += 1; break;
	}
	if (Tstep < 1) {
		Tstep = 1;
	}
	if (Tstep > 70) {
		Tstep = 70;
	}
	return Tstep;
}

int moveHare(int Hstep) {
	int per;
	per = rand() % 9 + 1;
	switch (per) {
	case 1:
	case 2:
		break;
	case 3:
	case 4:
		Hstep += 9; break;
	case 5:
		Hstep -= 12; break;
	case 6:
	case 7:
	case 8:
		Hstep += 1; break;
	default:
		Hstep -= 2; break;
	}
	if (Hstep < 1) {
		Hstep = 1;
	}
	if (Hstep > 70) {
		Hstep = 70;
	}
	return Hstep;
}

void delay(int t) {
	clock_t now = clock();
	while (clock() - now < t) {};
	return;
}

int main()
{
	cout << "BANG !!!!!\nAND THEY'RE OFF !!!!!\n";
	srand(time(0));
	int Hstep = 1;
	int Tstep = 1;
	while (Hstep < 70 && Tstep < 70) {
		Tstep = moveTortoise(Tstep);
		Hstep = moveHare(Hstep);
		for (int i = 1; i <= 70; i++) {
			if (Tstep == i) {
				if (Tstep == Hstep) {
					cout << "OUCH!!!";
				}
				else
					cout << "T";
			}
			else if (Hstep == i) {
				cout << "H";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
		delay(1000);
	}
	if (Tstep == Hstep) {
		cout << "It's a tie.\n";
	}
	else if (Tstep == 70) {
		cout << "TORTOISE WINS!!! YAH!!!\n";
	}
	else {
		cout << "Hare wins. Yuch.\n";
	}
	return 0;
}