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

	// Loop
	int cnt = 0;
	int num = n;
	while (num > 0) {
		cnt++;
		num /= 10;
	}

	cout << cnt << endl;

	// Log (Math)

	cout << int(log10(n)) + 1;

	return 0;
}