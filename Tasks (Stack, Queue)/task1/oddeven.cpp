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

    int odd = 0;
    int even = 0;

    for (int i = 0; i < 10; i++)
    {
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<endl;

    cout<<odd<<" odd numbers"<<endl;
    cout<<even<<" even numbers"<<endl;



    return 0;
}
