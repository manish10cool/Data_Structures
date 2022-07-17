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
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int max = arr[0];
	for (int i = 0; i < n; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}

	int max2 = INT_MIN;
	for (int i = 0; i < n; i++) {

		if (max == arr[i]) {
			continue;
		}

		if (max2 < arr[i]) {
			max2 = arr[i];
		}
	}

	if (max2 == INT_MIN) {
		cout << -1 << endl;
		// Denotes that 2nd Largest Number doesn't exist
	}
	else {
		cout << max2 << endl;
	}


	return 0;
}