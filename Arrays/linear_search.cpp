#include<iostream>
using namespace std;

int main(){
    
    // Declare and Initialize an Array !
    int a[5] = {5,6,4,2,7};

    // Input the key
    int key;
    cin>>key;

    // Linear Search the Array !
    int i;
    for(i=0;i<5;i++){
        // Try to match the key with every element
        if(key==a[i]){
            cout<<"Found at index "<<i<<endl;
            break;
        }
    }
    if(i>=5)
        cout<<"Not found"<<endl;
    return 0;
}