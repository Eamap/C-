#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fun(int *p){
    *p = *p + 1;
    return *p;

}

int main(){
    int arr[7] = { 11 , 22 , 33 , 44 , 55 , 66 , 77} , *ptr , x = 11;
    cout << arr << "\n---------------------------------------------------------\n"; //output the address of item 1
    for(int i = 0 ; i < 7 ; i++){
        cout << *( arr + i) << " "; // print the item in the array
    }
    cout << "\n---------------------------------------------------------\n";
    ptr = arr;
    cout << ptr << " " << *ptr << "\n---------------------------------------------------------\n";
    ptr = &x;
    cout << fun(ptr) << " " << x << " " << fun(&x) << " "<< x << " " << *ptr;
    return 0;
}
