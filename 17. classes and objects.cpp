#include<iostream>
using namespace std;

class Employee{
    public:
    int age;
    string name;

    void display(){
        cout<<"employee name : "<<name<<endl;

        cout<<"employee name : "<<age<<endl;
    }
};

int main(){
    Employee emp1;
    emp1.name= "Jonayed";
    emp1.age = 23;
    emp1.display();

    //cout<<"employee name : "<<emp1.name<<endl;

   // cout<<"employee name : "<<emp1.age<<endl;
}
