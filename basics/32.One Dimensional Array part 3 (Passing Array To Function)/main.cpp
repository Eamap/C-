#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void s( int arr[] , int s){
    for(int i = 0 ; i < s ; i++){
        cin >> arr[i];
    }
}

void g(int arr[] , int s){
    for(int i = 0 ; i < s ; i++){
        cout << "item " << i+1 << ": " << arr[i] << endl;
    }
}

int main(){
    // array pass by reference in functions
    int arr[10];
    s(arr , 10);
    g(arr , 10);
    return 0;
}
