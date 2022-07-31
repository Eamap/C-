#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    //array intionalization
    int arr1[5] = {1,2,3,4,5};
    cout << arr1[2] << endl;
    int arr2[5] = {0};
    cout << arr2[2] << endl;
    int arr3[5];
    arr3[0] = 10;
    arr3[1] = 20;
    arr3[3] = 30;
    arr3[4] = 40;
    arr3[5] = 50;
    cout << arr3[3] << endl;
    const int x = 5;
    int arr4[x];
    arr4[2] = 20;
    cout << arr4[2] << endl;
    cout << "--------------------------------------------------------" << endl;
    int arr5[10];
    for(int i = 0 ; i < 10 ; i++){
        cout << "Enter array [" << i << "] : ";
        cin >> arr5[i];
    }
    cout << "--------------------------------------------------------" << endl;
    for(int i = 0 ; i < 10 ; i++){
        cout << "array [" << i << "] = " << arr5[i] << endl;
    }
    return 0;
}
