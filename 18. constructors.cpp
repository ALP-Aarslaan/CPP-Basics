#include<iostream>
using namespace std;

class Employee{
    public:
    int age;
    float salary;
    string name;

    Employee(int age, float salary, string name, int password){
        this->age = age;
        this->salary = salary;
        this->name = name;
        this->password = password;
    }

    void displayInfo(){
        cout<<"employee name : "<<this->name<<endl;

        cout<<"employee name : "<<this->age<<endl;
        cout<<"employee salary : "<<this->salary<<endl;
        cout<<"employee password is  : "<<this->password<<endl;

    }
    void getPassword(){
        cout<<"the password is : "<<this->password<<endl;
    }

    private:
    int password;
};

int main(){
    Employee emp1 = Employee(23,3400.50,"Jonayed",51321);
    emp1.getPassword();
    emp1.displayInfo();
}
