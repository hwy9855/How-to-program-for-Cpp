//7.30

#include <iostream>
#include <cstring>
using namespace std;

int GetNum(int n, int i) {
	for (int k = 1; k < i; k++)
		n /= 10;
	return n % 10;
}

int len(int n) {
	int tmp=0;
	while (n > 0) {
		n /= 10;
		tmp++;
	}
	return tmp;
}

int main()
{
	int n, max = 0;
	cin >> n;
	int *Num = new int[n];
	int *Num_ = new int[n];
	int **Bucket = new int*[n];
	for (int i = 0; i < n; i++) {
		Bucket[i] = new int[10];
	}
	memset(Bucket, 0, sizeof(Bucket));
	for (int i = 0; i < n; i++) {
		cin >> Num[i];
		max = len(Num[i])>max ? len(Num[i]) : max;
	}
	for (int i = 1; i <= max; i++) {
		for (int j = 0; j < n; j++) {
                        int tt=GetNum(Num[j], i);
                        Bucket[j][tt] = Num[j];
		}
		for (int j = 0; j < n; j++) {
			Num_[j] = Num[j];
		}
		int k = 0;
		while (k < n) {
			for (int j = 0; j < 10; j++){
				for (int s = 0; s < n; s++) {
					if (Bucket[s][j]) {
						Num[k++] = Num_[s];
					}
				}
			}
		}
		memset(Bucket, 0, sizeof(Bucket));
	}
	for (int i = 0; i < n; i++) {
		cout << Num[i] << " ";
	}
	cout << endl;
	return 0;
}
