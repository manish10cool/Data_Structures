#include<bits/stdc++.h>
using namespace std;

int main() {

    cout << "Enter two numbers: ";
    int a,b;
    cin>>a>>b;

    cout << "Choose from the MENU:" << endl;
    cout << "1.ADDITION" << endl;
    cout << "2.SUBTRACTION" << endl;
    cout << "3.MULTIPLICATION" << endl;
    cout << "4.DIVISION" << endl;
    cout << "5.MODULO" << endl;
    int choice;
    cout << "Enter your choice : ";
    cin>>choice;

    if(choice == 1) {
        cout << "Sum : " << (a + b) << endl;
    }
    else if(choice == 2) {
        cout << "Difference : "  << (a - b) << endl;
    }
    else if(choice == 3) {
        cout << "Product : " << (a * b) << endl;
    }
    else if(choice == 4) {
        cout << "Quotient : " << (a / b) << endl;
    }
    else if(choice == 5) {
        cout << "Remainder : " << (a%b) << endl;
    }
    else cout << "Wrong I/P" << endl;


    return 0;
}