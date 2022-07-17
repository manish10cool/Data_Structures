#include <iostream>
using namespace std;

int main(){

    cout<<"Choose from the MENU"<<endl;
    cout<<"1.Rectangle"<<endl;
    cout<<"2.Triangle"<<endl;
    cout<<"3.Square"<<endl;
    cout<<"4.Circle"<<endl;
    cout<<"Enter the choice: ";
    int choice;
    cin>>choice;

    if(choice==1){
        cout<<"Enter the lenth and breadth:  ";
        int l,b;
        cin>>l>>b;
        cout<<(l*b)<<endl;
    }
    else if(choice==2){
        cout<<"Enter the base and height: ";
        float b,h;
        cin>>b>>h;
        cout<<0.5*h*b<<endl;
    }
    else if(choice==3){
        cout<<"Enter the side";
        int s;
        cin>>s;
        cout<<s*s<<endl;
    }
    else if (choice==4){
        cout<<"Enter the radius";
        int r;
        cin>>r;
        cout<<(3.14*r*r)<<endl;
    }
    else{
        cout<<"Invalid input"<<endl;
    }

    return 0;

}