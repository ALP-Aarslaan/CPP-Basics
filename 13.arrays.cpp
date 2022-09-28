#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    cout<<arr[2]<<endl;


    int ar[] = {1,2,3,4,5};
    cout<<arr[2]<<endl;

    int numbers[6];
    for (int i =0; i<6;i++){
        cout<<"enter marks for "<<i<<" number student :"<<endl;
        cin>>numbers[i];
    }
    for (int i =0; i<6;i++){
        cout<<"enter marks of "<<i<<" number student is :"<<numbers[i]<<endl;
    }

}
