#include <iostream>
#include <math.h>

void display(int *a,int *b) {
    // Complete this function
    *a = (*a) + (*b);
    *b = (*a)-(*b);
     std::cout<<(*a);
     std::cout<<abs(*b);
}

int main() {
    int a, b;
    std::cin>>a>>std::endl;
    std::cin>>b>>std::endl;


    display(&a,&b);
}
