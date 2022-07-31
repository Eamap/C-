#include<iostream>
#include<string>
using namespace std;

int main(){
    int a;
    cin >> a;
    for(;a>0;){
        cout << a << " ";
        a--;
    }
    cout << "\n";
    int x;
    cin >> x;
    for(int i = 0 ; i < 10 ; i++){
        cout << x << " ";
        x++;
    }
    cout << endl;
    int y;
    cin >> y;
    for(int i = 0 ; i < 10 ; i+=2){
        cout << y << " ";
        y++;
    }
    return 0;
}
