// Ques:
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

	int n;
	cin >> n;

	int sum = 0;
	while (n > 0) {
		int rem = n % 10;
		sum = sum + rem;
		n = n / 10;
	}

	cout << sum << endl;

	return 0;
}