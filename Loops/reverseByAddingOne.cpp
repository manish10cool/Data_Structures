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

	int ans = 0; // reverse

	while (n > 0) {
		int rem = n % 10;
		rem = rem + 1;
		// Edge Case
		if (rem == 10) rem = 0;
		ans = (ans * 10) + rem;	// Use good practise
		n = n / 10;
	}

	cout << ans << endl;

	return 0;
}