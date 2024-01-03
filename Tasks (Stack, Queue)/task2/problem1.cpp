#include<iostream>

using namespace std;

int main(){
    int s1,s2;
    cout<<"Enter size of arr1 : ";
    cin>>s1;
    int arr1[s1];
    cout<<"Enter elements of arr1 : "<<endl;
    for(int i = 0; i<s1; i++){
        cin>>arr1[i];
    } 
    cout<<"Enter size of arr2 : ";
    cin>>s2;
    int arr2[s2];
    cout<<"Enter elements of arr2 : "<<endl;
    for(int i = 0; i<s2; i++){
        cin>>arr2[i];
    } 
    
    int arr3[s1+s2];
    int j = 0;
    for(int i = 0; i<s1+s2; i++){
        if(i<s1){
            arr3[i] = arr1[i];
        }
        else{
            arr3[i] = arr2[j];
            j++;
        }
    }
    cout<<"Output result : "<<endl;
    for (int i = s1+s2-1; i >= 0; i--)
    {
        cout<<arr3[i]<<" ";
    }
    


    return 0;
}