#include<iostream>

using namespace std;

void Oddprint(int Start,int End){
    for(int i = Start; i<=End; i++){
        if(i%2!=0){
            cout<<i<<" ";
        }
    }
}

int main(){

    int start, end;
    cout<<"Enter starting point : "<<endl;
    cin>>start; 
    cout<<"Enter ending point : "<<endl;
    cin>>end;
    cout<<endl;

    cout<<"All odd numbers : ";
    Oddprint(start, end);
    return 0;
}