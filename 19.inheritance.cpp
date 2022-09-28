#include<iostream>
using namespace std;

class Person{
public:
int age;
string name;

Person(int age, string name){
    age = age;
    name = name;
}

void details(){
    cout<<" age is : "<<age<<endl;
    cout<<" name is : "<<name<<endl;
}

};

class Student:public Person{
 public :
 int salary;
 void details(){
    cout<<" salary is  : "<<salary<<endl;
 }

};

int main(){
    Person p = Person(23,"joanyed");
    p.details();

  //  Student s = Student(23333);
   // s.salary= 34000;
   // s.details();
}
