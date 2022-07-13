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


	cout << (6 && 4) << endl;

	// Infinite Loop
	// while (-1) {
	// 	cout << "HELLO" << endl;
	// }

	cout << ((-0) || (+0)) << endl;

	int a = 1;
	a++;
	cout << "Value of a : " << a << endl;

	int b = 12, c = 13;
	int x = b ^ c;
	cout << "Value of x(b^c) : " << x << endl;

	return 0;
}