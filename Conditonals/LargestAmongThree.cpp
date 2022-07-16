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

	int a, b, c;
	cin >> a >> b >> c;

	if (a >= b and a >= c) cout << a << endl;
	else if (b >= a and b >= c) cout << b << endl;
	else if (c >= a and c >= b) cout << c << endl;

	return 0;
}