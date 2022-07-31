#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int *ptr , *ptr2;
    int x = 10;
    ptr = &x;
    cout << ptr << endl;
    cout << &x << endl;
    cout << x << endl;
    cout << *ptr << endl;
    cout << "------------------------------------------------------ \n";
    x = 20;
    cout << ptr << endl;
    cout << &x << endl;
    cout << x << endl;
    cout << *ptr << endl;
    cout << "------------------------------------------------------ \n";
    *ptr = 30;
    cout << ptr << endl;
    cout << &x << endl;
    cout << x << endl;
    cout << *ptr << endl;
    cout << "------------------------------------------------------ \n";
    ptr2 = new int;
    *ptr2 = 4;
    cout << ptr2 << endl << *ptr2 << endl;
    delete ptr2;
    ptr2 = NULL;
    cout << ptr2 << endl << *ptr2 << endl;
    return 0;
}
