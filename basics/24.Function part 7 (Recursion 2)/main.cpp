#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int sum1(int x){
    if(x == 1)
        return 1;
    else
        return x + sum1(x-1);
}

int sum2(int x ,int y){
    if(x == y)
        return x;
    else
        return y + sum2(x,y-1);
}

void separate(int x){
    if(x == 0)
        return;
    else{
        cout << x%10 << endl;
        separate(x/10);
    }
}

int main(){
    int num1 , num2;
    cout << "Enter number : ";
    cin >> num1;
    cout << sum1(num1) << endl;
    cout << "-------------------------------------------" << endl;
    cout << "Enter two number : \n" ;
    cin >> num1 >> num2;
    cout << sum2(num1 , num2) << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Enter number : ";
    cin >> num1;
    separate(num1);
    cout << "---------------------------------------------" << endl;
    return 0;
}
