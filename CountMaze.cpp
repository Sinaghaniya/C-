#include<iostream>
using namespace std;

//countmaze path finder 
int countPathMaze(int n,int i,int j){

    if(i==n-1 && j==n-1){
        return 1;
    }
    if(i>=n || j>=n){
        return 0;
    }

    return countPathMaze(n,i+1,j) + countPathMaze(n,i,j+1); 
}
int main(){

    cerr<<countPathMaze(3,0,0); 


    return 0;
}