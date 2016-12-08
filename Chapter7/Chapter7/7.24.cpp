//7.24

#include <iostream>
using namespace std;

bool fl = false;
int track[64][2];

const int _Size = 8;

bool Borad[_Size][_Size] = {
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0
};

const int accessibility[_Size][_Size] = {
	2,3,4,4,4,4,3,2,
	3,4,6,6,6,6,4,3,
	4,6,8,8,8,8,6,4,
	4,6,8,8,8,8,6,4,
	4,6,8,8,8,8,6,4,
	4,6,8,8,8,8,6,4,
	3,4,6,6,6,6,4,3,
	2,3,4,4,4,4,3,2
};

const int step[2][8] = {
	2,1,-1,-2,-2,-1,1,2,
	-1,-2,-2,-1,1,2,2,1
};

bool _ifavalible(int x, int y, int k) {
	int newx = x + step[0][k];
	int newy = y + step[1][k];
	if (newx >= 0 && newx < 8 && newy >= 0 && newy < 8) {
		if (!Borad[newx][newy])
			return true;
	}
	return false;
}

void Trip(int n, int x, int y) {
	int imp[8]; //importance
	int turn[8] = { 0,1,2,3,4,5,6,7 };
	if (n == 64) {
		fl = true;
		track[n][0] = x;
		track[n][1] = y;
		return;
	}
	//if finished
	for (int i = 0; i < 8; i++) {
		if (_ifavalible(x, y, i)) {
			imp[i] = accessibility[x + step[0][i]][y + step[1][i]];
		}
		else
			imp[i] = 9;
	}
	//set the importance
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j<7 - i; j++) {
			if (imp[turn[j]]>imp[turn[j + 1]]) {
				swap(turn[j], turn[j + 1]);
			}
		}
	}
	//sort the importance
	int turnnum = 0;
	while (imp[turn[turnnum]] < 9 && turnnum < 8) {
		Borad[x + step[0][turn[turnnum]]][y + step[1][turn[turnnum]]] = true;
		Trip(n + 1, x + step[0][turn[turnnum]], y + step[1][turn[turnnum]]);
		Borad[x + step[0][turn[turnnum]]][y + step[1][turn[turnnum]]] = false;
		turnnum++;
		if (fl) {
			track[n][0] = x;
			track[n][1] = y;
			return;
		}
	}
	return;
}

int main()
{
	int a, b;
	cout << "Please input the first location of the knight (x from 0~7 and y from 0~7): ";
	cin >> a >> b;
	if (a > 7 || a < 0 || b > 7 || b < 0) {
		cout << "Error!\n";
	}
	else {
		Trip(1, a, b);
		for (int i = 1; i <= 63; i++) {
			cout << "(" << track[i][0] << "," << track[i][1] << ") -> ";
		}
		cout << "(" << track[64][0] << "," << track[64][1] << ")\n";
	}
	return 0;
}