#include<iostream>
#include<string>
using namespace std;

int sum(int x , int y){
    int s = x + y;
    return s;
}
void print(){
    cout << "Hello Eslam" << endl;
}

int main(){
    cout << "sum = " <<  sum(10,5) << endl;
    print();
    return 0;
}
