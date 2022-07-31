#include<iostream>
#include<string>
using namespace std;

double avg(int n1 , int n2 , int n3);
double sum(int , int);

int main(){
    cout << avg(10,20,31) << endl;
    cout << sum(12 , 123) << endl;
    return 0;
}

double avg(int n1 , int n2 , int n3){
    double sum = double(n1 + n2 + n3)/3;
    return sum;
}

double sum (int x , int y){
    return x + y;
}
