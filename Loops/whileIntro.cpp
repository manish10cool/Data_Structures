// Ques: 1 2 3 4 ... n using while
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


	// for (int i = 1; i <= n; i++) {
	// 	cout << i << " ";
	// }

	int i = 1;
	while (i <= n) {
		cout << i << " ";
		i++;
	}

	cout << endl;

	i = n;
	while (i >= 1) {
		cout << i << " ";
		i--;
	}



	return 0;
}