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


	int day;
	cin >> day;

	// if (day == 1) {
	// 	cout << "MONDAY" << endl;
	// }
	// else if (day == 2) {
	// 	cout << "TUESDAY" << endl;
	// }
	// else if (day == 3) {
	// 	cout << "WEDNESDAY" << endl;
	// }
	// else if (day == 4) {
	// 	cout << "THURSDAY" << endl;
	// }
	// else if (day == 5) {
	// 	cout << "FRIDAY" << endl;
	// }
	// else if (day == 6) {
	// 	cout << "SATURDAY" << endl;
	// }
	// else if (day == 7) {
	// 	cout << "SUNDAY" << endl;
	// }
	// else {
	// 	cout << "INVALID DAY";
	// }


	switch (day) {
	case 1: {
		cout << "Monday" << endl;
		break;
	}
	case 2: {
		cout << "Tuesday" << endl;
		break;
	}
	case 3: {
		cout << "Wednesday" << endl;
		break;
	}
	case 4: {
		cout << "Thursday" << endl;
		break;
	}
	case 5: {
		cout << "Friday" << endl;
		break;
	}
	case 6: {
		cout << "Saturday" << endl;
		break;
	}
	case 7: {
		cout << "Sunday" << endl;
		break;
	}
	default : {
		cout << "Invalid day" << endl;
		break;
	}
	}

	return 0;
}