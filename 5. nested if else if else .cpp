#include <iostream>
using namespace std;
int main(){
  bool isTodaySunny = false;
  bool isTodayWeekend = false;
  if (isTodaySunny == true){
    if(isTodayWeekend == true){
        cout<<"go to park"<<endl;
    }
  }

  else if (isTodaySunny == false){
    if(isTodayWeekend == true){
        cout<<"go to park but take an umbrellla"<<endl;
    }
  }
  else if (isTodaySunny == false){
    if(isTodayWeekend == false){
        cout<<"go to work but take an umbrellla"<<endl;
    }
  }
  else{
    cout<<"go to work"<<endl;
  }


}
