#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    //Aliasing
    int x = 30;
    int &y = x;
    int &z = y;
    cout << "x = " << x << " y = " << y << " z = " << z << endl;
    x = 10;
    cout << "x = " << x << " y = " << y << " z = " << z << endl;
    y = 20;
    cout << "x = " << x << " y = " << y << " z = " << z << endl;
    z = 50;
    cout << "x = " << x << " y = " << y << " z = " << z << endl;
    cout << "------------------------------------------------ \n";
    ///////////////////////////////////////////////////////////

    //constant variable
    const double pi = 3.14;
    cout << "pi = " <<  pi + 2 << endl;
    return 0;
}
