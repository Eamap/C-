#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void callByValue(int x , int y){
    int temp = x;
    x = y;
    y = temp;
}

void callByRefrence(int &x , int &y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    /*
        there is two types of calls
        1- call by refrence(change in real variable)
        2- call by value(doesnt change in real variable)
    */

    int x = 10 , y = 5;
    callByValue(x,y);
    cout << "Before Swap : " << "X = " << x << " , " << "Y = " << y << endl;
    callByRefrence(x,y);
    cout << "After Swap : " <<  "X = " << x << " , " << "Y = " << y << endl;
    return 0;
}
