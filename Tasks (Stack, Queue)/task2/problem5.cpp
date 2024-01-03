#include<iostream>

using namespace std;

int main(){
    int s,resSize=0;
    cout<<"Enter size of arr : ";
    cin>>s;
    int arr[s];
    cout<<"Enter elements of arr : "<<endl;
    for(int i = 0; i<s; i++){
        cin>>arr[i];
    }
   

    int count[s] = {0};

    for(int i = 0; i<s; i++){
        count[res[i]]++;
    }

    for(int i = 0; i<resSize; i++){
        cout<<res[i]<<" occurs : "<<count[i]<<" times."<<endl;
    }

    return 0;
}