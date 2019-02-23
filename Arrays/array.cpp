#include<iostream>
using namespace std;

int main(){
    // Declare and Initialise
    int a[10] = {1,2,3};

    // Declare
    // int a[10];
    // In brackets you give the max possible you need !
    
    // Input Elements in Array
    for(int i=3;i<=9;i++){
        cin>>a[i];
    }


    // Output Elements in Array 
    for(int i=0;i<=9;i++){
        cout<<a[i]<<",";
    }
    cout<<endl;
}