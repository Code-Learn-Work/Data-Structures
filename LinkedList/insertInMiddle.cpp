#include<iostream>
using namespace std;

class node{
public:
    int data;
    node*next;
    // Constructor
    node(int d){
        data = d;
        next = NULL;
    }
};

int len(node*head){
    int l = 0;
    while(head!=NULL){
        head = head->next;
        l++;
    }
    return l;
}

void insertAtHead(node*&head,int data){
    node*n = new node(data);
    n->next = head;
    head = n;
}

void insertAtTail(node*&head,int data){
    if(head==NULL){
        insertAtHead(head,data);
        return;
    }
    node*tail = head;
    while(tail->next!=NULL){
        tail = tail->next;
    }
    tail->next = new node(data);
    return;
    
}

void insertInMiddle(node*&head,int data,int pos){
    if(head==NULL or pos==0)
        insertAtHead(head,data);
    else if(pos>len(head))
        insertAtTail(head,data);
    else{
        // Take pos-1 jumps
        int jump=1;
        node*temp = head;
        while(jump<=pos-1){
            temp = temp->next;
            jump++;
        }

        node*n = new node(data);
        n->next = temp->next;
        temp->next = n;
    }
        
}

void print(node*head){
    while(head!=NULL){
        cout<< head->data<<"->";
        head=head->next;
    }
    cout<<"x"<<endl;
}

int main(){
    node*head=NULL;
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,3);
    insertAtHead(head,6);
    insertAtTail(head,1);
    insertInMiddle(head,2,3);
    print(head);
    return 0;
}