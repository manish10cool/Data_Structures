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

	int m1, m2, m3, m4, m5;
	cin >> m1 >> m2 >> m3 >> m4 >> m5;

	float p = (m1 + m2 + m3 + m4 + m5) / 500.0f * 100;

	if (p > 90 and p <= 100) {  // (90,100]
		cout << "A+" << endl;
	}
	else if (p > 80 and p <= 90) {
		cout << "B+" << endl;
	}
	else if (p > 70 and p <= 80) {
		cout << "C+" << endl;
	}
	else if (p > 60 and p <= 70) {
		cout << "D+" << endl;
	}
	else if (p > 50 and p <= 60) {
		cout << "E+" << endl;
	}
	else if ( p <= 50) {
		cout << "FAIL" << endl;
	}


	return 0;
}