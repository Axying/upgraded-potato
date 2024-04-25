//全排列
#include <bits/stdc++.h>
using namespace std;

const int N = 1000;
int a[N];

int main() {
	int n = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		a[i] = i;
	}

	bool target = true;

	while (target) {
		for (int i = 1; i <= n; i++) {
			cout << a[i];
		}//不能把这段放在target后面，不然还会生成一个123
		target = next_permutation(a + 1, a + n + 1);

		cout << '\n';

	}
	return 0;
}
