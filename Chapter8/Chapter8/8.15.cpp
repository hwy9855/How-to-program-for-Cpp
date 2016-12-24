//8.15

#include <iostream>
using namespace std;

int partition(int a[], int left, int right) {
	if (left > right) {
		return;
	}
	int tmp = a[left];
	while (left != right) {
		while (left < right&&a[right] >= tmp) {
			right--;
		}
		if (left < right) {
			a[left] = a[right];
		}
		while (left < right&&a[left] <= tmp) {
			left++;
		}
		if (left < right) {
			a[right] = a[left];
		}
	}
	a[left] = tmp;
	return left;
}

void QuickSort(int a[], int left, int right) {
	if (left > right) {
		return;
	}
	int mid = partition(a, left, right);
	QuickSort(a, mid + 1, right);
	QuickSort(a, left, mid - 1);
	return;
}

void print(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	return;
}

int main()
{
	int n;
	cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	QuickSort(a, 0, n - 1);
	print(a, n);
	return 0;
}