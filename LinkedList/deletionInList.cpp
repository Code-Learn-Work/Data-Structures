#include<iostream>
using namespace std;

class node{
public:
    int data;
    node*next;
    node(int d){
        data = d;
        next = NULL;
    }
};

void insertAtHead(node*&head,int data){
    node*n = new node(data);
    n->next = head;
    head = n;
}

void deleteAtHead(node*&head){
    if(head==NULL){
        return;
    }
    node*temp = head;
    head = head->next;
    delete temp;
    return;
}

void deleteAtTail(node*&head){
    if(head==NULL)
        return;

    node*prev=NULL;
    node*temp=head;

    while(temp->next != NULL){
        prev=temp;
        temp = temp->next;
    }

    delete temp;
    prev->next = NULL;
    return;
}

void deleteInMiddle(node*&head,int pos){
    if(head==NULL){
        return;
    }

    if(head==0){
        deleteAtHead(head);
    }

    int jumps = 1;
    node*prev=NULL;
    node*temp = head;
    while(jumps<=pos-1){
        prev = temp;
        temp = temp->next;
        jumps++;
    }
    
    prev->next = temp->next;
    delete temp;
    return;

}

void print(node*head){
    while(head!=NULL){
        cout<< head->data <<"->";
        head=head->next;
    }
    cout<<"x"<<endl;
}

int main(){
    node*head = NULL;
    for(int i=1;i<=5;i++){
        insertAtHead(head,i);
    }
    cout<<"Before Deletions : ";
    print(head);
    // deleteAtHead(head);
    deleteInMiddle(head,2);
    // deleteAtTail(head);
    cout<<"After Deletions : ";
    print(head);
    return 0;
}