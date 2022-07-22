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

	bool isPrime = true;

	// for (int i = 2; i < n; i++) {
	// 	if (n % i == 0) {
	// 		isPrime = false;
	// 		break;
	// 	}
	// }

	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			isPrime = false;
			break;
		}
	}


	if (isPrime == true ) {
		cout << "Prime" << endl;
	}
	else {
		cout << "Not Prime" << endl;
	}

	return 0;
}