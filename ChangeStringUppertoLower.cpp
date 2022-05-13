#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
         
         string str1 = "hasodhsaoind";  

         string str = "ASSSSSS";
          
         //convert into uppercase;//first demo 

        /*for(int i=0;i<str1.size();i++){
             if(str1[i] >= 'a' && str1[i] <= 'z')
             str1[i] -= 32;
         }

         cout<<str1<<" This is demo of Lower to upper"; 

         for(int i =0;i<str.size();i++){
             if(str[i] >= 'A' && str[i] <= 'Z')

             str[i] += 32;
         } 

         cout<<"\n"<<str<<" This is demo of Upper to Lower ";*/

         transform(str1.begin(),str1.end(),str1.begin(),::toupper);//Second method

         cout<<str1;

         transform(str.begin(),str.end(),str.begin(),::tolower);

         cout<<"\n"<<str;
           
         
    return 0;
}