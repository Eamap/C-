#include<iostream>
using namespace std;

int main(){
    int x1 = 5 , y1 = 10;
    cout << x1 + y1 << endl; //int + int = int

    int x2 = 5;
    float y2 = 10.6;
    cout << x2 + y2 << endl; //int + float = float

    int x3 = 5;
    double y3 = 10.6123;
    cout << x3 + y3 << endl; //int + double = double

    int x4 = 5;
    double y4 = 10.6123;
    int z1 = x4 + y4;
    cout << z1 << endl; //int

    int x5 = 5;
    double y5 = 10.6123;
    cout << x5 + int(y5) << endl; //int + double = double

    double d,f,g;
    cin >> d >> f >> g;
    int sum = d + f + g;
    cout << sum << endl;
    return 0;
}
