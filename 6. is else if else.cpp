#include <iostream>
using namespace std;

int main(){
    cout<<"enter your age : "<<endl;
    int age;
    cin>>age;

    if (age>150){
        cout<<"invalid age"<<endl;
    }
    else if (age>18){
        cout<<"you can vote"<<endl;
    }
    else{
        cout<<"you can not vote"<<endl;
    }
}
