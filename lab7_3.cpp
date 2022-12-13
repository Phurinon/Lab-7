#include<iostream>

using namespace std;

int adiff(int x,int y){
  int z;
  if(x > y){
    z = (x-y)%360;
  }else{
    z = (y-x)%360;
  }
  if(z > 180){
    return 360-z;
  }
  return z;
}

int main(){
  cout << adiff(180,270)<<"\n";
  cout << adiff(210,45)<<"\n";
  cout << adiff(0,360)<<"\n";
  cout << adiff(10,350)<<"\n";
  cout << adiff(95,260)<<"\n";
  cout << adiff(90,-90)<<"\n";
  cout << adiff(1000,280)<<"\n";
  cout << adiff(60,244);
}