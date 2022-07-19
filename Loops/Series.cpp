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

	// 1 2 3 4 ....
	for (int i = 1; i <= n; i++) {
		cout << i << " ";
	}

	cout << endl;

	// N N-1 N-2 .... 1
	for (int i = n; i >= 1; i--) {
		cout << i << " ";
	}

	cout << endl;

	// 1 3 5 ....
	for (int i = 1; i <= n; i = i + 2) {
		cout << i << " ";
	}

	// for (int i = 1; i <= n; i++) {
	// 	if (i & 1 == 1) {	// odd
	// 		cout << i << " ";
	// 	}
	// }

	cout << endl;

	// 2 4 6 8 ...
	for (int i = 2; i <= n; i += 2) {
		cout << i << " ";
	}

	// for (int i = 1; i <= n; i++) {
	// 	if (i & 1 == 0) {	// odd
	// 		cout << i << " ";
	// 	}
	// }


	cout << endl;

	// 0 1 1 2 3 5 ..... (You have to print first N terms)

	int fp = 0, sp = 1;
	for (int i = 1; i <= n; i++) {
		if (i == 1) {
			cout << fp << " ";
		}
		else if (i == 2) {
			cout << sp << " ";
		}
		else if (i >= 3) {
			int curr = sp + fp;
			cout << curr << " ";
			fp = sp;
			sp = curr;
		}
	}

	cout << endl;

	// 1 2 4 8 16 ....	2^(i)
	// int num = 1;
	// for (int i = 1; i <= n; i++ ) {
	// 	cout << num << " ";
	// 	num = num * 2;
	// }

	int num = 1;
	for (int i = 1; i <= n; i++) {
		cout << num << " ";
		num = num << 1;
	}


	return 0;
}