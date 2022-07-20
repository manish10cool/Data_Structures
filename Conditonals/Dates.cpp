// To compare two dates
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

	int d1, d2, m1, m2, y1, y2;
	cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;

	// Nested if approach


	// if (y1 < y2) {
	// 	cout << d1 << " " << m1 << " " << y1 << " comes first" << endl;
	// }
	// else if (y1 > y2) {
	// 	cout << d2 << " " << m2 << " " << y2 << " comes first" << endl;
	// }
	// else { // y1 == y2
	// 	if (m1 < m2) {
	// 		cout << d1 << " " << m1 << " " << y1 << " comes first" << endl;
	// 	}
	// 	else if (m1 > m2) {
	// 		cout << d2 << " " << m2 << " " << y2 << " comes first" << endl;
	// 	}
	// 	else { // m1 == m2
	// 		if (d1 < d2) {
	// 			cout << d1 << " " << m1 << " " << y1 << " comes first" << endl;
	// 		}
	// 		else if (d1 > d2) {
	// 			cout << d2 << " " << m2 << " " << y2 << " comes first" << endl;

	// 		}
	// 		else {
	// 			cout << "Both dates are same" << endl;
	// 		}
	// 	}
	// }


	// Ladder if approach

	if (y1 < y2) {
		cout << "d1" << endl;
	}
	else if (y1 > y2) {
		cout << "d2" << endl;
	}
	else if (y1 == y2 && m1 < m2) { // m1 < m2 && y1 == y2
		cout << "d1" << endl;
	}
	else if (y1 == y2 && m1 > m2) {
		cout << "d2" << endl;
	}
	else if (y1 == y2 && m1 == m2 && d1 < d2) {
		cout << "d1" << endl;
	}
	else if (y1 == y2 && m1 == m2 && d1 > d2) {
		cout << "d2" << endl;
	}
	else if (y1 == y2 && m1 == m2 && d1 == d2) {
		cout << "Both are same" << endl;
	}





	return 0;
}