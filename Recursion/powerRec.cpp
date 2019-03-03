#include<iostream>
using namespace std;

int power(int a,int b){
    // Base Case
    if(a==0){
        return 0;
    }
    if(b==0){ 
        return 1;
    }
    else if(b==1){
        return a;
    }

    // Recursive Case
    return a*(power(a,b-1));
}

int main(){
    int a;
    int b;
    cin>>a>>b;
    cout<<power(a,b)<<endl;
}