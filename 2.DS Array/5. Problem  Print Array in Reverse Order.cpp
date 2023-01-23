#include<iostream>
using namespace std;
int main(){
    int Array_Length;
    cin>>Array_Length;
    int Numbers[Array_Length];
    for (int i = 0; i < Array_Length; i++)
    {
        cin>>Numbers[i];
    }
    cout<<"Normal Order "<<endl;
    for (int i = 0; i < Array_Length; i++)
    {
        cout<<Numbers[i]<<" ";
    }
    cout<<"\nReverse Order"<<endl;
    for (int i = Array_Length-1; i>=0 ; i--)
    {
        cout<<Numbers[i]<<" ";
    }
    return 0;
}