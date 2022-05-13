#include<bits/stdc++.h>
using namespace std;

//This program will return depth/height of the Binary Tree;

struct Node{
       
       int data;
       struct Node* left;
       struct Node* right;

       Node(int val){

           data = val;

           left = NULL;

           right = NULL;
       }

};

int calcHeight(Node* root){

    if(root == NULL){
        return 0;
    }
    int lHeight = calcHeight(root->left);
    int rHeight = calcHeight(root->right);
    return max(lHeight,rHeight) + 1;
}

int main(){

    Node* root = new Node(1);

    root->left = new Node(2);

    root->left->left = new Node(3);

    root->left->right = new Node(4);

    root->left->left->left = new Node(5);

    root->left->left->right = new Node(6);

    root->left->right->right = new Node(7);

    root->left->left->left->left = new Node(8);


    /*

                   1
                  / 
                 2
                / \
               3   4
              / \   \
             5   6   7
            /
           8
    */         

    cout<<calcHeight(root);

    return 0;
}