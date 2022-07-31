#include<iostream>
#include<string>
using namespace std;
int y = 10; //global scope
int main(){
    int y = 5; //local scope
    {
        int y = 3;
        cout << y << endl;
    }
    cout << y << endl;
    cout << ::y << endl; // to print global scope

    return 0;
}
