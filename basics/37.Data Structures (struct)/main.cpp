#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct info{
    int height;
    int wieght;
    string eye_color;
};

struct student1{
    string name;
    long long id;
    float age;
    int grade;
    info s_info;
}ali;

int main(){
    student1 eslam;
    eslam.name = "Eslam Omar";
    eslam.id = 20201700120;
    eslam.age = 20.5;
    eslam.grade = 14;
    cout << eslam.id << endl;
    /////////////////////////////////////////////////////////////////////
    student1 ahmed = {"Ahmed Samir" , 20201700120 , 20.5 , 14};
    cout << ahmed.name << endl;
    /////////////////////////////////////////////////////////////////////
    ali.age = 15;
    cout << ali.age << endl;
    /////////////////////////////////////////////////////////////////////
    ali.s_info.height = 170;
    cout << ali.s_info.height << endl;
    /////////////////////////////////////////////////////////////////////
    student1 *ptr;
    ptr = &eslam;
    cout << ptr << endl;
    return 0;
}
