#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    //random function
    for(int i = 0 ; i < 10 ; i++){
        cout << rand() << " ";
    }

    cout << endl << endl;
    //to print numbers from 0 to 9
    for(int i = 0 ; i < 10 ; i++){
        cout << rand()%10 << " ";
    }
    cout << endl << endl;
    //to print numbers from 20 to 30
    for(int i = 0 ; i < 10 ; i++){
        cout << rand()%(30-20+1)+20 << " ";
    }

    cout << endl << endl;
    //to print unigue rundom numbers every time
    srand(time(NULL));
    for(int i = 0 ; i < 10 ; i++){
        cout << rand()%(30-20+1)+20 << " ";
    }

    cout << endl << endl;
    //time function (we put 0 or null in function arguments)
    for(int i = 0 ; i < 10 ; i++){
        cout << time(0) << " ";
    }
    cout << endl << endl;
    //to calculate time taken in loop
    int x = time(0),y = 0;
    for(int i = 0 ; i < 1000 ; i++){
        cout << "Eslam" << endl;
        y = time(0);
    }
    cout << "time taken in loop = " << y-x;
    cout << endl << endl;
    return 0;
}
