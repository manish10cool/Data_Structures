// Ques: Reverse a number by using loop
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

	// int rev = 0;
	// while (n > 0) {
	// 	int rem = (n % 10);
	// 	rev = rev * 10 + rem;
	// 	n /= 10;
	// }

	// int rev = 0;
	// for (int i = n; i > 0; i /= 10) {
	// 	int rem = n % 10;
	// 	rev = rev * 10 + rem;
	// 	n /= 10;
	// }

	int d = int(log10(n)) + 1;

	int rev = 0;
	for (int i = 1; i <= d; i++) {
		int rem = n % 10;
		rev = rev * 10 + rem;
		n /= 10;
	}



	return 0;
}