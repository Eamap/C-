#include<iostream>
#include<string>
using namespace std;

int main(){
    int x1 , y1;
    cin >> x1 >> y1;
    if(x1 == y1){
        cout << "Yes";
    }
    else if(x1 > y1){
        cout << "goal";
    }
    else{
        cout << "No";
    }
    return 0;
}
