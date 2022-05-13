#include<iostream>
using namespace std;
//the thing we trying to in 
//these program is to get to 4 by 
//using efficient/effective method
int countPath(int s,int e){

if(s==e){
    return 1;

 }
 if(s>e){
     return 0;
 }

  int count = 0;
  for(int i =1;i<=6;i++){
      count+= countPath(s+i,e);
  }
  return count;
  

}

int main(){


 cout<<countPath(0,3)<<endl;

    return 0;
}