#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* next;

    // Constructor
    node(int d){
        data = d;
        next = NULL;
    }
};

// Pssing a pointer variable by reference
void insertAtHead(node*&head,int data){
    node*n = new node(data);
    n->next = head;
    head = n;
}

void printList(node*head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"X"<<endl;
}
int main(){

    node*head = NULL;
    for(int i=1;i<=5;i++){
        insertAtHead(head,i);
    }
    printList(head);
    return 0;
}
