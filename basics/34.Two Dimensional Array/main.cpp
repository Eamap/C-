#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void enter(int arr[][6] , int s){
    for(int i = 0 ; i < s ; i++){
        for(int j = 0 ; j < 6 ; j++){
            cout << "Enter student " << i+1 << " subject " << j+1 << " : ";
            cin >> arr[i][j];
        }
    }
}

void print(int arr[][6] , int s){
    for(int i = 0 ; i < s ; i++){
        for(int j = 0 ; j < 6 ; j++){
            cout << "student " << i+1 << " subject " << j+1 << " : " << arr[i][j] << endl;
        }
    }
}

int main(){
    //initialization
    int arr1[3][4] = { {0,1,2,3} , {1,2,3,4} , {1,2,3,4} };
    // rows then colmns
    int arr2[2][3];
    for(int r = 0 ; r < 2 ; r++){
        for(int c = 0 ; c < 3 ; c++){
            cin >> arr2[r][c];
        }
    }
    cout << "-------------------------------------------- \n";
    for(int r = 0 ; r < 2 ; r++){
        for(int c = 0 ;  c < 3 ; c++){
            cout << arr2[r][c] << " ";
        }
        cout << endl;
    }
    cout << "-------------------------------------------- \n";
    double arr3[3][6];
    for(int r = 0 ; r < 3 ; r++){
        for(int c = 0 ; c < 6 ; c++){
            cout << "Enter student " << r+1 << " subject " << c+1 << " : ";
            cin >> arr3[r][c];
        }
    }
    cout << "-------------------------------------------- \n";
    for(int r = 0 ; r < 3 ; r++){
        for(int c = 0 ; c < 6 ; c++){
            cout << "student " << r+1 << " subject " << c+1 << " : " << arr3[r][c] << endl;
        }
    }
    cout << "-------------------------------------------- \n";
    /////////////////////////////////////////////////////////////////////////////////////////////
    int arr5[3][6];
    enter(arr5 , 3);
    cout << "-------------------------------------------- \n";
    print(arr5 , 3);
    return 0;
}
