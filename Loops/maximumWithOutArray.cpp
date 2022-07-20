// Ques: Maximum among n numbers without using array
#include<bits/stdc++.h>
using namespace std;

void FIO() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main() {
	FIO();

	int n; cin >> n;

	int max, x;
	max = INT_MIN; // -INF
	for (int i = 1; i <= n; i++) {
		cin >> x;
		if (x > max) {
			max = x;
		}
	}

	cout << max << endl;

	return 0;
}