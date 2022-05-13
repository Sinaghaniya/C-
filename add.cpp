
#include<bits/stdc++.h>
using namespace std;
string addBinary(int n1,int n2){
    int sum=0;
    string result=" ";
    int carry=0;
    int i,j;
    while(n1>0 || n2>0 || carry>0){
        i=n1%10;
        j=n2%10;
        sum=carry+i+j;
        if(sum%2==0){
            result+=to_string(0);
        }
        else{
            result+=to_string(1);
        }
        if(sum>1){
            carry=1;
        }
        else{
            carry=0;
        }
        n1/=10;
        n2/=10;
    }
    reverse(result.begin(),result.end());
    return result;
}

int main(){
    int n1,n2;
    cin>>n1>>n2;
    cout<<addBinary(n1,n2);  
}