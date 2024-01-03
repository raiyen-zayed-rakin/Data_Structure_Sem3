#include<iostream>

using namespace std;

int main(){

    int arr[10];

    cout<<"Enter elements : "<<endl;
    for (int i = 0; i < 10; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    cout<<"Normal order : "<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Reverse order : "<<endl;
    for (int i = 10-1; i >=0; i--)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    
    return 0;
}