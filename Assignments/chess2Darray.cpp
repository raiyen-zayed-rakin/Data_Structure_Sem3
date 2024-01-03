#include<iostream>

using namespace std;

int main()
{
    int chess[8][8];

    for(int i = 0; i<8; i++){
        for(int j = 0; j<8; j++){
            chess[i][j] = j;
        }
    }

    cout<<"Your chess board condinates : "<<endl<<endl;

    for(int i = 0; i<8; i++){
        for(int j = 0; j<8; j++){
            cout<<"["<<i<<","<<j<<"]"<<"   ";
        }
        cout<<endl<<endl;
    }
    cout<<endl<<"Enter your chess piece type : "<<endl;
    int choice;
    cout<<"1) King \n2) Queen \n3) Rook \n4) Bishop \n5) Knight \n6) Pawn"<<endl<<endl;
    cout<<"->>";
    cin>>choice;

    int row, col;
    cout<<"Enter your chess piece position -> "<<endl;
    cout<<"Row : ";
    cin>>row;
    cout<<"Column : ";
    cin>>col;

    switch (choice)
    {
    case 1:
        break;
    
    case 2:
        break;
    
    case 3:
        break;
    
    case 4:
        cout<<"All possible valid cordinates for bishop are : "<<endl;
                


        break;
    
    case 5:
        break;
    
    case 6:
        break;
    
    default:
        break;
    }

    return 0;
}