// Ques: Check whether a number is armstrong or not
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

	int d = int(log10(n)) + 1;

	int originalNum = n;
	int newNum = 0;
	while (n > 0) {
		int r = n % 10;
		newNum = newNum + pow(r, d);		// pow(Base,power)
		n /= 10;
	}


	if (newNum == originalNum) cout << "Armstrong Number!" << endl;
	else cout << "Not an Armstrong Number" << endl;

	return 0;
}