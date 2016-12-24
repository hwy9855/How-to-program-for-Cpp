//8.17

#include <iostream>
#include <ctime>
#include <cstring>
using namespace std;

const int area = 64;

char Maze[12][12];

const int setx[4] = { 1,0,-1,0 };
const int sety[4] = { 0,1,0,-1 };

void set_rand() {
	srand(time(0));
	return;
}

int Rand() {
	return rand() % 4;
}

bool ifavailable(int x, int y) {
	if (x > 0 && y > 0 && x < 11 && y < 11) {
		return true;
	}
	else
		return false;
}

void set_maze(int n,int x,int y,int dirc) {
	Maze[x][y] = '.';
	if (!n) {
		return;
	}
	if (rand() % 10 < 8 && ifavailable(x + setx[dirc], y + sety[dirc])) {
		set_maze(n - 1, x + setx[dirc], y + sety[dirc], dirc);
                return;
	}
	int dir = Rand();
	int k = 0;
	while (!ifavailable(x + setx[dir], y + sety[dir])) {
		dir = Rand();
	}
	set_maze(n - 1, x + setx[dir], y + sety[dir],dir);
	return;
}

void Random() {
	int rank = Rand()+1;
	int beg, end;
	beg = rand() % 12;
	end = rand() % 12;
	int s;
	s = rand() % 4;
        if (beg == 0) {
                beg += 1;
        }
        if (beg == 11) {
                beg -= 1;
        }
        if (end == 0) {
                end += 1;
        }
        if (end == 11) {
                end -= 1;
        }
	switch (s) {
	case 0: set_maze(area / (rank + 2), 0, beg, 0); set_maze(area / (rank + 2), 11, end, 2); cout << 0 << " " << beg << endl << 11 << " " << end << endl; break;
	case 1: set_maze(area / (rank + 2), beg, 0, 1); set_maze(area / (rank + 2), 11, end, 2); cout << beg << " " << 0 << endl << 11 << " " << end << endl; break;
	case 2: set_maze(area / (rank + 2), 0, beg, 0); set_maze(area / (rank + 2), end, 11, 3); cout << 0 << " " << beg << endl << end << " " << 11 << endl; break;
	case 3: set_maze(area / (rank + 2), beg, 0, 1); set_maze(area / (rank + 2), end, 11, 3); cout << beg << " " << 0 << endl << end << " " << 11 << endl; break;
	}

	int x, y;
	for (int i = 1; i <= rank; i++) {
		x = rand() % 12;
		y = rand() % 12;
		if (x < 2) {
			x += 2;
		}
		if (x > 9) {
			x -= 2;
		}
		if (y < 2) {
			y += 2;
		}
		if (y > 9) {
			y -= 2;
		}
		set_maze(area / (rank + 2), x, y,rand()%4);
	}
	return;
}

void printmaze(){
        for(int i=0;i<=11;i++){
                for(int j=0;j<=11;j++){
                        cout<<Maze[i][j];
                }
        }
        cout << endl;
        return;
}
int main()
{
	memset(Maze, '#', sizeof(Maze));
	freopen("maze.txt", "w", stdout);
	set_rand();
	Random();
	printmaze();
	return 0;
}
