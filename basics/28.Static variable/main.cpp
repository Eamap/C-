#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print(){
    static int x = 0;
    x++;
    cout << x << endl;
}

int main(){
    print();
    print();
    print();
    return 0;
}
