#include<iostream>
using namespace std;

#define MAX 500

int multiply(int a,int ans[],int size){
    int carry = 0; // Initialize the carry

    // One by one multiply n with each element of ans[]
    for(int i=0;i<size;i++){
        int pro = ans[i]*a + carry;

        // Store last digit of pro
        ans[i] = pro%10;

        // Assign the rest in carry
        carry = pro/10;
    }

    while(carry){
        ans[size] = carry%10;
        carry = carry/10;
        size++;
    }

    return size;

}

void factorial(int n){
    int ans[MAX];

    // Initialize the answer
    ans[0] = 1;
    int size = 1;

    for(int i=2;i<=n;i++){
        size = multiply(i,ans,size);
    }

    cout<<"Factorial of "<<n<<" = ";
    for(int i=size;i>=0;i--){
        cout<<ans[i];
    }
    cout<<endl;
}

int main(void){
    int n;
    cin>>n;
    factorial(n);
}