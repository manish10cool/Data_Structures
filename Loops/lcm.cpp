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

	int a, b;
	cin >> a >> b;


	// int lcm;
	for (int i = max(a, b); i <= a * b; i++) {
		if (i % a == 0 and i % b == 0) {
			cout << i << " ";
			// lcm = i;
			break;
		}
	}

	//use of lcm

	return 0;
}