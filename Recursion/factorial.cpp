// This program is valid upto n=16;
#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0)
        return 1;
    else
        return n*factorial(n-1);
}

int main(void){
    // Take user input for
    // finding the factorial
    int n;
    cin>>n;

    cout<<"Factorial of "<<n<<" = "<<factorial(n)<<endl;

    return 0;
}