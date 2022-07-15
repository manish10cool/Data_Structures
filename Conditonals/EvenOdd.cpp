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

	// naive method
	if (n % 2 == 0) cout << "Even" << endl;
	else cout << "Odd" << endl;

	// This is using & operator
	if ((n & 1) == 0) cout << "even" << endl;
	else cout << "odd" << endl;

	/*
		if(n&1) cout << "Odd" << endl;
		else cout << "Even" << endl;

	*/
	// Ternery Operator
	cout << ((n & 1) ? "Odd" : "Even" ) << endl;

	return 0;
}