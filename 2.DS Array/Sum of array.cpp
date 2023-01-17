#include<iostream>
using namespace std;
int main(){
    int arr;
    cout<<"Enter the length of array "<<endl;
    cin>>arr;
    int n[arr];
    for (int i = 0; i < arr; i++)
    {
        cin>>n[i];
    }
    for (int i = 0; i < arr; i++)
    {
        cout<<n[i]<<" ";

    }
    int sum = 0;
    for (int i = 0; i < arr; i++)
    {
        sum += n[i];

    }
    cout<<sum;

}
