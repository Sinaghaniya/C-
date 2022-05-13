#include<bits/stdc++.h>
using namespace std;

struct Node{
       
       int data;
       struct Node* left;
       struct Node* right;

       Node(int val){

           data=val;
           left=NULL;
           right=NULL;
       }

};

int search(int inorder[],int start,int end,int curr){
    for(int i=start;i<=end;i++){
        if(inorder[i] == curr){
            return i;
        }
    }

   return -1;
}

Node* buildTree(int preorder[], int inorder[],int start,int end){

    static int idx = 0;

    if(start>end){
        return NULL;
    }

    int curr = preorder[idx];
    idx++;
    Node* node = new Node(curr);

    if(start==end){
        return node;
    }

    int pos= search(inorder,start,end,curr);
    node->left = buildTree(preorder,inorder,start,pos-1);
    node->right = buildTree(preorder,inorder,pos+1,end);

    return node;
}

void inorderPrint(Node* root){
    if(root == NULL){
        return;
    }
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);


}

int main(){
    
    /*struct Node* root = new Node(1);

    root->left = new Node(2);

    root->right = new Node(3);

    root->left->left = new Node(4);

    root->left->right = new Node(5);

    root->right->left = new Node(6);

    root->right->right = new Node(7);*/

    int preorder[] = {1,2,4,3,5};

    int inorder[] = {4,2,1,5,3};

    Node* root = buildTree(preorder,inorder,0,4);

    inorderPrint(root);


    


    return 0;
}