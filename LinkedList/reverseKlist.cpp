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
    head=n;
}

void insertAtEnd(node*&head,int data){
    if(head==NULL){
       insertAtHead(head,data);
       return;
    }
    node*cur = head;
    while(cur->next!=NULL){
        cur=cur->next;
    }
    node*n = new node(data);
    cur->next = n;
    n->next = NULL;
}

node* reverseK(node*head,int k){
    node*cur = head;
    node*prev = NULL;
    node*n = NULL;
    int count = 0;

    while(cur!=NULL and count<k){
        n = cur->next;
        cur->next = prev;
        prev = cur;
        cur = n;
        count++;
    }

    if(n!=NULL)
        head->next = reverseK(n,k);
    
    return prev;
}

void buildList(node*&head){
    int size;
    int k;
    cin>>size>>k;
    for(int i=0;i<size;i++){
        int d;
        cin>>d;
        insertAtEnd(head,d);
    }
    head = reverseK(head,k);
}

void printList(node*head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main(void){
    node*head = NULL;
    buildList(head);
    printList(head);
}