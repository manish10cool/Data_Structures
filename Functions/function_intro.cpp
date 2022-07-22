// Ques: Function Intro
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

void print() {
	cout << "hello world" << endl;
}

void printname(string name) {
	cout << "Hello " << name << endl;
}

int powerOf2(int n) {
	return n * n;
}

int main() {
	FIO();

	print();

	string s;
	cin >> s;
	printname(s);

	int n;
	cin >> n;
	cout << powerOf2(n) << endl;

	return 0;
}