//8.16

#include <iostream>
#include <ctime>
using namespace std;

#define tr(a, i) (a + i + 4) % 4

const int dirx[4] = { 0,1,0,-1 };
const int diry[4] = { 1,0,-1,0 };

char Maze[12][12] = {
	'#','#','#','#','#','#','#','#','#','#','#','#',
	'#','.','.','.','#','.','.','.','.','.','.','#',
	'.','.','#','.','#','.','#','#','#','#','.','#',
	'#','#','#','.','#','.','.','.','.','#','.','#',
	'#','.','.','.','#','#','#','#','.','#','.','.',
	'#','#','#','.','#','#','.','#','.','#','.','#',
	'#','#','#','.','#','#','.','#','.','#','.','#',
	'#','#','#','.','#','#','.','#','.','#','.','#',
	'#','.','.','.','.','.','.','.','.','#','.','#',
	'#','#','#','#','#','#','.','#','#','#','.','#',
	'#','.','.','.','.','.','.','#','.','.','.','#',
	'#','#','#','#','#','#','#','#','#','#','#','#'
};

void _delay(int t) {
	clock_t x;
	x = clock();
	while (clock() - x < t) {}
	return;
}

void showMaze() {
	system("cls");
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {
			cout << Maze[i][j] <<" ";
		}
		cout << endl;
	}
	_delay(200);
	return;
}

bool _ifavailable(int x, int y) {
	if (x > 0 && y > 0 && x <= 12 && y <= 12 && Maze[x][y] != '#') {
		return true;
	}
	return false;
}

bool mazeTravel(int dirc, int x, int y) {
	showMaze();
	if (x == 4 && y == 11) {
		cout << "Congratulations !!!";
		return true;
	}
	int newx, newy;
	for (int i = 1; i >= -2; i--) {
		newx = x + dirx[tr(dirc, i)];
		newy = y + diry[tr(dirc, i)];
		if (_ifavailable(newx, newy)) {
			Maze[x][y] = '.';
			Maze[newx][newy] = 'X';
			if (mazeTravel(tr(dirc, i), newx, newy)) {
				return true;
			}
		}
	}
	return true;
}

int main()
{
	mazeTravel(0, 3, 1);
	return 0;
}
