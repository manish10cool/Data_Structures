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

	int ts;
	cin >> ts;

	int h = ts / 3600;
	ts = ts % 3600;	// ts = ts - h*3600
	int m = ts / 60;
	ts = ts % 60;
	int s = ts;

	cout << h << " hr " << m << " min " << s << " sec" << endl;

	return 0;
}