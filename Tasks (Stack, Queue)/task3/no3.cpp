#include<iostream>

using namespace std;

struct student{
    int unique_id;
    int credit;
    float cgpa;
};

int main()
{
    student s10[10];
    for(int i=0; i<10; i++){
        cout<<"Enter student No."<<i+1<<" information : "<<endl;
        cout<<"Enter Unique ID : ";
        cin>>s10[i].unique_id;
        cout<<"Enter credits : ";
        cin>>s10[i].credit;
        cout<<"Enter cgpa : ";
        if(s10[i].cgpa<=4.00){
            cin>>s10[i].cgpa;
        }
        else{
            cout<<"Not valid CGPA."<<endl;
        }
        cout<<endl<<endl;
    }

    cout<<"The students unique ID whose CGPA is more than 3.75 : "<<endl;
    for(int i = 0; i<10; i++){
        if(s10[i].cgpa>3.75){
            cout<<"Student No."<<i+1<<" : "<<s10[i].unique_id<<endl;
        }
    }

    cout<<"The students unique ID who has completed more than 50 credits : "<<endl;
    for(int i = 0; i<10; i++){
        if(s10[i].credit>50){
            cout<<"Student No."<<i+1<<" : "<<s10[i].unique_id<<endl;
        }
    }

return 0;
}

