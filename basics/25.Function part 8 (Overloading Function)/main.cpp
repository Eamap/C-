#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print(int a){
    cout << "The integer number is : " << a << endl;
}
void print(int a , float b){
    cout << "The integer number is : " << a << endl;
    cout << "The float number is : " << b << endl;
}
void print(double a){
    cout << "The double number is : " << a << endl;
}
void print(char a){
    cout << "The char character is : " << a << endl;
}

int main(){
    print(4);
    print(4 , 4.5);
    print(4.756);
    print('b');
    return 0;
}
