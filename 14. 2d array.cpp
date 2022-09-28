#include<iostream>
using namespace std;
int main(){
    int array2d[3][3];
    for(int row =0; row<3; row++){
        for(int col=0; col<3; col++){
            cout<<"value for ["<<row<<"]["<<col<<"] :"<<endl;
            cin>>array2d[row][col];
        }
    }


    for(int row =0; row<3; row++){
        for(int col=0; col<3; col++){
            cout<<"value of ["<<row<<"]["<<col<<"] :"<<array2d[row][col]<<endl;
        }
    }
}
