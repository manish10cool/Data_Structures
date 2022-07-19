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

	// I/P
	int n;
	cin >> n;

	// Process

	int eventerms = 0, evensum = 0, oddterms = 0, oddsum = 0;
	for (int i = 0; i <= n; i++) {

		if (i % 2 !=  0) { // i is odd
			oddterms++;
			oddsum = oddsum + i;
		}
		else {	// i is even
			eventerms++;
			evensum = evensum + i;
		}
	}

	cout << "Even terms : " << eventerms << endl;
	cout << "Even sum : " << evensum << endl;
	cout << "Odd terms : " << oddterms << endl;
	cout << "Odd sum : " << oddsum << endl;

	return 0;
}