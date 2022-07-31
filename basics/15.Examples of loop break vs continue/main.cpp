#include<iostream>
#include<string>
using namespace std;

int main(){
    //contiue
    for(int i = 0 ; i < 10 ; i++){
        if(i == 5)
            continue;
        cout << i << " ";
    }
    cout << endl;
    //nrea;
    for(int i = 0 ; i < 10 ; i++){
        if(i == 5)
            break;
        cout << i << " ";
    }
    return 0;
}
