#include<iostream>

using namespace std;

int main(){

    int row1,col1,row2,col2,row3,col3;
    cout<<"Enter 1st matrix row size : ";
    cin>>row1;
    cout<<"Enter 1st matrix column size : ";
    cin>>col1;

    int arr1[row1][col1];

    cout<<"Enter elements for the 1st Matrix : "<<endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cout<<"First["<<i<<"]["<<j<<"] = ";
            cin>>arr1[i][j];
        }
        cout<<endl;
    }
    cout<<endl<<endl;

    cout<<"First matrix : "<<endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cout<<arr1[i][j]<<"     ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"Enter 2nd matrix row size : ";
    cin>>row2;
    cout<<"Enter 2nd matrix column size : ";
    cin>>col2;

    int arr2[row2][col2];

    cout<<"Enter elements for the 2nd Matrix : "<<endl;
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout<<"Second["<<i<<"]["<<j<<"] = ";
            cin>>arr2[i][j];
        }
        cout<<endl;
    }
    cout<<endl<<endl;


    cout<<"Second matrix : "<<endl;
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout<<arr2[i][j]<<"     ";
        }
        cout<<endl;
    }
    cout<<endl;


    cout<<"Enter 3rd matrix row size : ";
    cin>>row3;
    cout<<"Enter 3rd matrix column size : ";
    cin>>col3;

    int arr3[row3][col3];


    cout<<"Enter elements for the 3nd array : "<<endl;
    for (int i = 0; i < row3; i++)
    {
        for (int j = 0; j < col3; j++)
        {
            cout<<"Third["<<i<<"]["<<j<<"] = ";
            cin>>arr3[i][j];
        }
        cout<<endl;
    }
    cout<<endl<<endl;

    cout<<"Third matrix : "<<endl;
    for (int i = 0; i < row3; i++)
    {
        for (int j = 0; j < col3; j++)
        {
            cout<<arr3[i][j]<<"     ";
        }
        cout<<endl;
    }

    if((row1 == row2) && (row2 == row3) && (col1 == col2) && (col2 == col3)){
        cout<<"Matrix summation is possible!"<<endl<<endl;
        int sum[row1][col1];
        cout<<"Resulted Summation :"<<endl;
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                sum[i][j] = arr1[i][j] + arr2[i][j] + arr3[i][j];
                cout<<sum[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"Matrix Addition is not possible"<<endl;
    }








    return 0;
}
