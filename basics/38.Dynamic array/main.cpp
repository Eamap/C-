#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int s;
    cout << "Enter the size of the array :";
    cin >> s;
    cout << "__________________________________________________________________\n";
    int *arr = new int[s];
    for(int i = 0 ; i < s ; i++){
        cout << "Enter item " << i + 1 << " : ";
        cin >> arr[i];
    }
    cout << "__________________________________________________________________\n";
    cout << "Items of the array : \n";
    for(int i = 0 ; i < s ; i++){
        cout << arr[i] << " ";
    }
    delete [] arr;
    return 0;
}
