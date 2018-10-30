#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
}*head;

class LinkedList{
public:
    void insertNode(struct node* ptr,int val){
        if(head == NULL){
            node *nn = new node;
            nn->data = val;
            nn->next = NULL;
            head = nn;
        }
        else{
            node *nn = new node;
            nn->data = val;
            nn->next = ptr;
            head = nn;
        }
    }

    void printList(struct node* ptr){
        for(;ptr!=NULL;ptr=ptr->next){
            cout<<ptr->data<<" ";
        }
        cout<<endl;
    }
};

int main(void){
    LinkedList ll;
    int n,a;
    cout<<"Enter the size of list : ";
    cin>>n;
    head = NULL;
    cout<<"Enter the elements of linked list : "<<endl;
    for(int i=0;i<n;i++){
        cin>>a;
        ll.insertNode(head,a);
    }
    cout<<"Linked List is : ";
    ll.printList(head);
    return 0;
}

