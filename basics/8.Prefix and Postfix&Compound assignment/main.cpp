#include<iostream>
#include<string>
using namespace std;

int main(){
    int x1 =5;
    ++x1; // prefix
    cout << x1 << endl;
    cout << "-------------------------------------------------" << endl;
    int x2 =5;
    x2++; // postfix
    cout << x2 << endl;
    cout << "-------------------------------------------------" << endl;
    int x3 =5 , y1 = 0;
    y1 = ++x3; //result = 6
    cout << y1 << endl;
    cout << x1 << endl;
    cout << "-------------------------------------------------" << endl;
    int x4 =5 , y2 = 0;
    y2 = x4++; //result = 5
    cout << y2 << endl;
    cout << x4 << endl;
    cout << "-------------------------------------------------" << endl;
    int x5 =5;
    x5 += 2; //result = 7
    cout << x5 << endl;
    cout << "-------------------------------------------------" << endl;
    int x6 =5;
    x6 -= 2; //result = 3
    cout << x6 << endl;
    cout << "-------------------------------------------------" << endl;
    int x7 =5;
    x7 *= 2; //result = 10
    cout << x7 << endl;
    cout << "-------------------------------------------------" << endl;
    int x8 =6;
    x8 /= 2; //result = 3
    cout << x8 << endl;
    cout << "-------------------------------------------------" << endl;
    return 0;
}
