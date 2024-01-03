#include<iostream>

using namespace std;

int main()
{
    int row, col;
    cout<<"Enter your row number of you matrix : ";
    cin>>row;
    cout<<"Enter your column number of you matrix : ";
    cin>>col;

    int arr[row][col];

    cout<<"Enter the elements of the matrix : "<<endl;

    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout<<"arr["<<i<<"]["<<j<<"] = ";
            cin>>arr[i][j];
        }
    }

    int res[col][row];

    for(int i = 0; i<col; i++){
        for(int j = 0; j<row; j++){
            res[i][j] = arr[j][i];
        }
    }
    cout<<"Transpose of the matrix : "<<endl;
    for(int i = 0; i<col; i++){
        for(int j = 0; j<row; j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }


return 0;
}
