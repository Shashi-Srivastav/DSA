#include<iostream>
using namespace std;
int main(){
    int Array_Length;
    cin>>Array_Length;
    int Array_Name[Array_Length];
    for (int  i = 0; i < Array_Length; i++)
    {
        cin>>Array_Name[i];
    }
    cout<<"Array Before Reverse "<<endl;
    for (int  i = 0; i < Array_Length; i++)
    {
        cout<<Array_Name[i]<<" ";
    }
    int start = 0;
    int end = Array_Length-1;
    while (start <= end)
    {
        swap(Array_Name[start], Array_Name[end]);
        start ++;
        end --;
    }
    cout<<"\nArray After Reverse "<<endl;
    for (int  i = 0; i < Array_Length; i++)
    {
        cout<<Array_Name[i]<<" ";
    }
    return 0;
}