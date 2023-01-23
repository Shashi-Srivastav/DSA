#include<iostream>
using namespace std;
int main (){
    int a,b;
    cin>>a>>b;
    cout<<"Before Swap "<<endl;
    cout<<"A = "<<a;
    cout<<" B = "<<b;

    // int temp;
    // temp = a;
    // a = b;
    // b = temp;

    swap(a,b);

    // a = a^b;
    // b = a^b;
    // a = a^b;

    cout<<"\nAfter swap "<<endl;
    cout<<"A = "<<a;
    cout<<" B = "<<b;
    return 0;
}