#include<iostream>

using namespace std;

int main(){
    int s,s2;
    cout<<"Enter size of arr : ";
    cin>>s;
    int arr[s];
    cout<<"Enter elements of arr : "<<endl;
    for(int i = 0; i<s; i++){
        cin>>arr[i];
    } 
    int counter = 0;
    int input;
    cout<<"Enter a number to search : ";
    cin>>input;

    for (int i = 0; i < s; i++)
    {
        if(arr[i] == input) counter++;
    }

    cout<<"The number "<<input<<" occurs "<<counter<<" times in the array."<<endl;
    


    return 0;
}