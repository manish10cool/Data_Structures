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


// amulgum
struct Student {
	// Public
	string name;
	int roll;
	float marks;

	// Constructor
	Student() {
		cout << "Student is Created!" << endl;
	}

	// destructor
	~Student() {
		cout << "Student is Destroyed" << endl;
	}
};

class A {
	// private
public:
	int a;

};


void input(Student &s) {
	cin >> s.name >> s.roll >> s.marks;
}

void print(Student &s) {
	cout << s.name << " " << s.roll << " " << s.marks << endl;
}

int main() {
	FIO();

	Student s1;
	Student s2;

	input(s1);
	input(s2);

	print(s1);
	print(s2);

	cout << "Program ends Here!" << endl;

	A t;
	cin >> t.a;



	return 0;
}