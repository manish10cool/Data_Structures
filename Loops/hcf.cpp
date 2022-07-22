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


	int a, b; cin >> a >> b;

	for (int i = min(a, b); i >= 1; i--) {
		if (a % i == 0 and b % i == 0) {
			cout << i << endl;
			break;
		}
	}

	return 0;
}