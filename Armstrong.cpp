#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter your input";
    cin>>n;

    int sum =0;
    int originaln = n;
    while(n>0){
        int lastdigit=n%10;
        sum+= round(pow(lastdigit,3));
        n=n/10;
    }
    if (sum==originaln)
    {
        cout<<"This is Armstrong Number"<<endl;

    }else{

        cout<<"This is not an Armstrong Number"<<endl;
    }
    

    return 0;
}