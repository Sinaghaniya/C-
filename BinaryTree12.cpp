#include<bits/stdc++.h>
using namespace std;

struct Node{

       int data;
       
       struct Node* right;

       struct Node* left;

       Node(int val){

           data = val;

           left = NULL;

           right = NULL;
       }
        


};

int height(Node* root){
     if(root==NULL){
         return 0;
     }
    int lh = height(root->left);
    int rh = height(root->right);

    return max(lh, rh) +1; 
}

bool isbalanced(Node* root){
    
    if(root==NULL){
        return true;
    }
     if(isbalanced(root->left)== false){
         return false;

     }

     if(isbalanced(root->right)== false){
         return false;

     } 

     int lh = height(root->left);
     int rh = height(root->right);
     if(abs(lh-rh)<=1){
         return true;
     }else{
         return false;
     }
}

bool isbalanced2(Node* root,int* height){

    if(root==NULL){
        return true;
    }
    int lh = 0, rh = 0;

    if(isbalanced2(root->left, &lh)==false){

      return false; 
    }
    if(isbalanced2(root->right, &rh)==false){

      return false; 
    }

    *height = max(lh,rh) +1;
    if(abs(lh-rh)<=1){

        return true;
    }else{

        return false;
    }


}

int main(){

    Node* root1 = new Node(1);

    root1->left = new Node(2);

    root1->right = new Node(3);

    root1->left->left = new Node(4);

    root1->left->right = new Node(5);

    root1->right->left = new Node(6);

    root1->right->right = new Node(7);

    /*

            1
          /  \   
         2    3
        / \  /  \
       4   5 6  7

    */ //The Structure of tree in this program 

    Node* root2 = new Node(1);

    root2->left = new Node(2);

    root2->left->left = new Node(3);

    //the below function is made to print data 
    //of root1 which is balanced and root2 which is unbalanced
    /*if(isbalanced(root2)){

        cout<<"Balanced tree";
    }else{
                                   //this is method 1 to print data
        cout<<"Unbalanced tree";
    }*/

    int height = 0; 
    if(isbalanced2(root1, &height) == true){
        cout<<"balanced Tree";
    }else{                       //this is method 2 to print data but in faster manner
        cout<<"Unbalanced Tree";
    }  

    return 0;
}