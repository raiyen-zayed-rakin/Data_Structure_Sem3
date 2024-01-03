
#include<iostream>

using namespace std;


string encode(string s, int j){
    for(int i = j; i<s.length(); i+=(j+1)){
        s[i] = s[i] +2;
    }
    return s;
}
int main()
{
    cout<<encode("I am a student",2)<<endl<<endl;

    string s;
    cout<<"Enter your string : ";
    getline(cin,s);
    int j;
    cout<<"Enter integer : ";
    cin>>j;
    cout<<encode(s,j);

return 0;
}
