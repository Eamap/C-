#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int sum(int x , int y = 10){
    return x + y;
}

int main(){
    cout << sum(10) << endl;
    cout << sum(10 , 5) << endl;
    return 0;
}
