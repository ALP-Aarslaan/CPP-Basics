#include<iostream>
using namespace std;
int main(){
    int a = 23;
    int *ptr;
    ptr = &a;
    // here & represents address and * represents value
    cout<<"value of a is : "<<*ptr<<endl;
    cout<<"address of a is : "<<ptr<<endl;

        cout<<"value of a is : "<<a<<endl;
       cout<<"address of a is : "<<&a<<endl;
}
