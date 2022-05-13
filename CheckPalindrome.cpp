#include<iostream>
using namespace std;

int main(){
        
        int n;
        
        cout<<"Enter your Elements : ";

        cin>>n;

        char arr[n+1];

        cout<<"Enter your Words:";

        cin>>arr;
        //Check palindrome example Anna if you 
        //reverse this word its still will be same its called palindrome 
        bool check=1;

        for(int i=0;i<n;i++){
            if(arr[i] != arr[n-1-i]){
                check =0;
                break;
            }
        }

        if(check==true){
            cout<<arr<<" is a palindrome";
        }else{

            cout<<arr<<"is not a palindrome";
        }


    return 0;
}