#include<iostream>
#include<string>
using namespace std;

int main(){
    string name;
    float age;
    cin >> name >> age;
    //and
    if(name == "eslam" && age == 20){
        cout << "Hi Eslam" << endl;
    }
    else{
        cout << "Wrong!!";
    }
    cin >> name >> age;
    //or
    if(name == "eslam" || age == 20){
        cout << "Hi Eslam" << endl;
    }
    else{
        cout << "Wrong!!";
    }
    cin >> name >> age;
    //not
    if(name == "eslam" && age != 20){
        cout << "Hi Eslam" << endl;
    }
    else{
        cout << "Wrong!!";
    }
    //not
    if(!true){
        cout << "Hi";
    }
    return 0;
}
