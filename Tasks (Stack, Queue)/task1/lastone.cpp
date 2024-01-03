#include<iostream>
#include<string.h>
using namespace std;

int main(){

    char name[50];

    cout<<"Enter your name : ";
    cin.getline(name,50);

    char revName[50];

    for (int i = 0, j = strlen(name)-1; i < strlen(name), j>=0; i++,j--)
    {
        revName[i] = name[j];
    }
    
    cout<<"Correct name : "<<endl;
    cout<<name<<endl;
    cout<<"Reversed name : "<<endl;
    cout<<revName<<endl;


    return 0;
}