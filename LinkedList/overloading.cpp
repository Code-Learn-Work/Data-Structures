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

void print(node*head){
    while(head!=NULL){
        cout<<head->data<<" -> ";
        head=head->next;
    }
    cout<<"x"<<endl;
}

void buildList(node*&head){
    int d;
    cin>>d;
    while(d!=-1){
        insertAtHead(head,d);
        cin>>d;
    }
}

istream& operator>>(istream &is,node*&head){
    buildList(head);
    return is;
}

ostream& operator<<(ostream &os,node*head){
    print(head);
    return os;
}

int main(){
    node*head = NULL;
    node*head1 = NULL;
    cin>>head>>head1;
    cout<<head<<endl;
    cout<<head1<<endl;
}