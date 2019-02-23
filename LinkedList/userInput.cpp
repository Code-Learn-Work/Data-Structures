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

// Passing value by reference and inserting at the head
void insertData(node*&head,int data){
    node*n = new node(data);
    n->next = head;
    head = n;
}

// Print the list
void print(node*head){
    while(head!=NULL){
        cout<< head->data<<" -> ";
        head = head->next;
    }
    cout<<"x"<<endl;
}

// Building linked list from user input
void buildList(node*&head){
    int data;
    cin>>data;
    while(data!=-1){
        insertData(head,data);
        cin>>data;
    }
}

int main(void){
    node*head = NULL;
    buildList(head);
    print(head);
    return 0;   
}