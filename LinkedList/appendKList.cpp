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

node* appendToFront(node*&head,int k){
    node*cur = head;
    node*prev = NULL;
    for(int i=0;i<k;i++){
        cur = cur->next;
        if(cur==NULL)
            return NULL;
    }

    prev = head;
    while(cur->next!=NULL){
        cur=cur->next;
        prev = prev->next;
    }
    cur->next = head;
    head = prev->next;
    prev->next = NULL;
    return head;
}

void buildList(node*&head){
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        int d;
        cin>>d;
        insertAtEnd(head,d);
    }
    int n;
    cin>>n;
    head = appendToFront(head,n);
}

void printList(node*head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main(){
    node*head = NULL;
    buildList(head);
    printList(head);
}