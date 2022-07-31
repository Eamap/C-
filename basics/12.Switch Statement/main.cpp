#include<iostream>
#include<string>
using namespace std;

int main(){
    int x;
    cin >> x;
    // switch case take integer numbers only
    switch(x){
        case 1:
            cout << "it is one" << endl;
        break;
        case 2:
            cout << "it is two" << endl;
        break;
        case 3:
            cout << "it is three" << endl;
        default:
            cout << "there is no case" << endl;
        break;
    }
    cout << "------------------------------------------------------------" << endl;
    double num1 , num2;
    char ope;
    cout << "Enter two numbers : " << endl;
    cin >> num1 >> num2;
    cout << "Enter the operation : " << endl;
    cin >> ope;
    switch(ope){
        case '+':
            cout << "The number is : " << num1 + num2 << endl;
        break;
        case '-':
            cout << "The number is : " << num1 - num2 << endl;
        break;
        case '*':
            cout << "The number is : " << num1 * num2 << endl;
        break;
        case '/':
            cout << "The number is : " << num1 / num2 << endl;
        break;
        default:
            cout << "You intered wrong operation" << endl;
        break;
    }
    return 0;
}
