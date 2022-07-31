#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1[5] = {3,5,6,7,8};
    int arr2[5];
    for(int i = 0 ; i < 5 ; i++){
        arr2[i] = arr1[i];
    }
    cout << arr2[3];
    return 0;
}
