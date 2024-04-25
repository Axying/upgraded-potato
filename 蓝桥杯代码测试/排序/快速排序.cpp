#include <bits/stdc++.h>
using namespace std;
const int N = 1030;
int a[N];

int partition(int a[], int l, int r) {
	int povit = a[r];
	int i = l;
	int j = r;
	while (i < j) {
		while (i < j && a[i] <= povit)i++;
		while (i < j && a[j] >= povit)j--;
		if (i < j)swap(a[i], a[j]);
		else
		swap(a[i], a[r]);
	}


	return i;
}

void quicksort(int a[], int l, int r) {
	if (l < r) {
		int mid = partition(a, l, r);
		quicksort(a, l, mid - 1);
		quicksort(a, mid + 1, r);
	}

}

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	quicksort(a, 1, n);
	for (int i = 1; i <= n; i++) {
		cout << a[i];
	}

	return 0;
}
