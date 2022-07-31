#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    //Returns the tangent of an angle
    cout << tan(30) << endl;

    //Returns the sine of x (x is in radians)
    cout << sin(30) << endl;

    //Returns the cosine of x
    cout << cos(60) << endl;

    //Returns the absolute value of x
    cout << abs(-10) << endl;

    //Returns the value of x rounded up to its nearest integer
    cout << ceil(10.5) << endl;

    //Returns the value of x rounded down to its nearest integer
    cout << floor(10.5) << endl;

    //Returns the value of Ex
    cout << exp(10) << endl;

    //Returns the highest value of a floating x and y
    cout << fmax(10,20) << endl;

    //Returns the lowest value of a floating x and y
    cout << fmin(10,20) << endl;

    //Returns the highest value of a floating x and y
    cout << max(10,20) << endl;

    //Returns the lowest value of a floating x and y
    cout << min(10,20) << endl;

    //Returns the value of x to the power of y
    cout << pow(10,3) << endl;
    return 0;
}
