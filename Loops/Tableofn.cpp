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

	for (int i = 1; i <= 10; i++) {
		cout << n << " * " << i << " = " << n*i << endl;
	}

	return 0;
}