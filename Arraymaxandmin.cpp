#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n;

    cout<<"Enter your number :";

    cin>>n;

    int arr[n];

    for(int i = 0;i<=n;i++){
        cin>>arr[i];
    }

    int maxNo=INT_MIN;//we given value of INT_MIN because it will replace it to max number 
    int minNo=INT_MAX;//we given value of INT_MAX because it will replace it to min number 

    for(int i=0;i<=n;i++){
       /* if(arr[i]>maxNo){
            maxNo = arr[i];
        }*/
        maxNo=max(maxNo,arr[i]);//this is another way to declare it 
        minNo=min(minNo,arr[i]);//this is another way to declare it
        /*if(arr[i]<minNo){
            minNo=arr[i];
        }*/
    }

    cout<<maxNo<<" "<<minNo<<endl;


    return 0;
}