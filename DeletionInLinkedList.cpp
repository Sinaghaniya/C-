#include <iostream>
using namespace std;

class node{

    public:

       int data;
       node* next;

       node(int val){
           data = val;
           next = NULL;
       }

};

void insertAtTail(node* &head,int val){
    node* n = new node(val);

    if(head==NULL){
        head=n;
        return;     
    }

    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head){
     node* temp=head;
     while(temp!=NULL){
           cout<<temp->data<<"->";
           temp=temp->next;     
     }
     cout<<"NULL"<<endl;   

}

void insertAtHead(node* &head, int val){//this function will add the head of
                                        //linked list at the start of linked list ie 4;
    node* n=new node(val);
    n->next = head;
    head = n;

}


bool search(node* head,int key){//this function will 
                                //search for head of linked list 
                                //and afterwards will return 1 or 0 ie True or false 

    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
void deleteAtHead(node* &head){
    node* todelete=head;
    head=head->next;

    delete todelete;
}
void deletion(node* &head,int val){ 
      
     if(head==NULL){
         return;
     }
     if(head->next==NULL){
         deleteAtHead(head);
         return;
     }

     node* temp=head;
     while(temp->next->data!=val){
         temp=temp->next;
     }
     node* todelete = temp->next;
     temp->next=temp->next->next;

     delete todelete;
}




int main(){

     node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
    insertAtHead(head,4);//this will call the
                         //add function of adding head in linked list ie 4
    display(head);       //this will display the add function 
    cout<<search(head,5)<<endl;//this will call search function of linked list and return 1 or 0;
    deletion(head,3);//this function will delete specific head
    //deleteAtHead(head);
    display(head);
    

    return 0;
}