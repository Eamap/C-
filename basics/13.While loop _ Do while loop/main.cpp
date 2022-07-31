#include<iostream>
#include<string>
using namespace std;

int main(){
    int x;
    cin >> x;
    cout << "--" << endl;
    //while loop
    while(x >= 0){
        cout << x << endl;
        x--;
    }
    cout << "-------------------------" << endl;
    //do-while loop
    do{
        cout << x << endl;
        x--;
    }while(x >=0);
    return 0;
}
