#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n == 0 || n == 1)
        return 1;
    else
        return n * fact(n-1);
}

int main(){
    int x;
    cout << "Enter number : ";
    cin >> x;
    cout << "The Factorial is : " << fact(x);
    return 0;
}
