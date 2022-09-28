#include <iostream>
using namespace std;

int main(){

    //while loop:
    int index = 1;
    while(index<=20){
        cout<<"we are at index :"<<index<<endl;
        index++;
    }
   return 0;

    // do while loop : we use this to run a loop at least 1 time
    int j=0;
    do{
        cout<<"we are at index :"<<j<<endl;
        j++;
    }while(j>23);

    return 0;

    // for loop:
    for(int i =0; i<=20; i++){
        cout<<"value is :"<<i<<endl;
    }
}

