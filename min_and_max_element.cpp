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

	// Main Program
	int n;
	cin >> n;
	long long arr[n];


	// 1 <= n <= 10^5
	// i < n
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	//long long min = arr[0], max = arr[0];
	long long min, max;
	min = max = arr[0];

	for (int i = 0; i < n; i++) {

		if (min > arr[i]) {
			min = arr[i];
		}

		if (max < arr[i]) {
			max = arr[i];
		}
	}


	pair<long long, long long> p = {min, max};
	// or
	// p.first = min;
	// p.second = max;

	cout << p.first << " " <<  p.second << "\n";


	return 0;
}