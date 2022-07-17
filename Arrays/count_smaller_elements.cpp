// Link: https://practice.geeksforgeeks.org/problems/count-of-smaller-elements5947/1/?page=2&difficulty[]=-2&difficulty[]=-1&category[]=Arrays&sortBy=submissions
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
	int x;
	cin >> x;

	// Naive Method
	int count1 = 0;

	for (int i = 0; i < n; i++) {
		if (x >= arr[i]) {
			count1++;
			// count = count + 1;
		}
	}

	// Improved Method
	int count2 = 0;
	// Because of the sorted property of array
	for (int i = 0; i < n; i++) {
		if (x >= arr[i]) {
			count2++;
		}
		else {
			break;
		}
	}


	cout << "Count 1 : " << count1 << endl;
	cout << "Count 2 : " << count2 << endl;


	// Lower Bound (Binary Search)
	// To be discussed


	return 0;
}