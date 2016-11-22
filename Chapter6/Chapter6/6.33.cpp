//6.33

#include <iostream>
#include <ctime>
using namespace std;

bool flip() {
	return rand() % 2;
}

int main()
{
	srand(time(0));
	int front = 0, back = 0;
	for (int i = 1; i <= 100; i++) {
		if (flip()) {
			++front;
		}
		else {
			++back;
		}
	}
	cout << "Front: " << front << endl;
	cout << "Back: " << back << endl;
	return 0;
}