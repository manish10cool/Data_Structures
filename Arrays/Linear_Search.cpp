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

	// INPUTS
	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int x;
	cin >> x;


	// PROCESS

	// Linear Search


	int key = -1;
	for (int i = 0; i < n; i++) {

		if (arr[i] == x) {
			key = i;
			break;
		}
	}

	// OUTPUT

	if (key == -1) {
		cout << x << " is not present" << endl;
	}
	else {
		cout << x << " is present at " << key << endl;
	}


	return 0;
}