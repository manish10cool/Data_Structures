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


	int m1 = 90, m2 = 90, m3 = 85;
	// float perc = (m1 + m2 + m3) / 300.0f * 100.0;

	char ch = 'A';

	cout << 5 + ch << endl;

	float perc = ((float)m1 + m2 + m3) / 300.0f * 100.0;
	cout << perc << endl;


	return 0;
}