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

void insert(node*&head,int data){
    node*n = new node(data);
    n->next = head;
    head = n;
}

bool searchRecursive(node*head,int key){
    if(head==NULL)
        return false;
    
    if(head->data==key)
        return true;

    return searchRecursive(head->next,key);
}

bool searchIterative(node*head,int key){
    while(head!=NULL){
        if(head->data==key){
            return true;
        }
        head=head->next;
    }
    return false;
}
int main(void){
    node*head=NULL;
    for(int i=1;i<=5;i++){
        insert(head,i);
    }
    // Recursive Search
    if(searchRecursive(head,0)){
        cout<<"Found !"<<endl;
    }
    else{
        cout<<"Not Found !"<<endl;
    }

    // Iterative Search
    if(searchIterative(head,9)){
        cout<<"Found !"<<endl;
    }
    else{
        cout<<"Not Found !"<<endl;
    }
    
    return 0;
}