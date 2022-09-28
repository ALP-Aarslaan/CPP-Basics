#include <iostream>
using namespace std;

int main(){
    cout<<"enter your age : "<<endl;
    int age;
    cin>>age;
    switch(age){
       case 12:
            cout<<"you are 12 years old"<<endl;
            break;
       case 18:
            cout<<"you are 18  years old"<<endl;
            break;
       default:
       cout<<"you are 23 years old"<<endl;
       break;
    }
}

