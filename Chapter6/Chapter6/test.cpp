#include <iostream>
#include <cstring>
using namespace std;

struct _Goods {
	int ID;
	int next;
};

int main()
{
	_Goods good[51];
	for (int i = 1; i <= 50; i++) {
		good[i].ID = i;
		good[i].next = i + 1;
	}
	good[50].next = 1;
	int counter = 1, sum = 0, temp=1;
	while (sum<49){
		counter++;
		if (counter == 13) {
			cout << good[temp].next << endl;
			good[temp].next = good[good[temp].next].next;
			sum++;
			counter = 1;
		}
		temp = good[temp].next;
	}
	cout << temp;
	return 0;
}