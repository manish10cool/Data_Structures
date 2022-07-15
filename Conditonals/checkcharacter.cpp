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

	char ch;
	cin >> ch;

	if (ch >= '0' and ch <= '9') {
		cout << "Digit" << endl;
	}
	else if (ch >= 'A' and ch <= 'Z') {
		cout << "Upper Case Alphabet" << endl;
	}
	else if (ch >= 'a' and ch  <= 'z') {
		cout << "Lower Case Alphabet" << endl;
	}
	else {
		cout << "Special Character" << endl;
	}

	/*

	if (ch >= 48 and ch <= 57) {
		cout << "Digit" << endl;
	}
	else if (ch >= 65 and ch <= 90) {
		cout << "Upper Case Alphabet" << endl;
	}
	else if (ch >= 97 and ch  <= 122) {
		cout << "Lower Case Alphabet" << endl;
	}
	else {
		cout << "Special Character" << endl;
	}

	*/

	return 0;
}