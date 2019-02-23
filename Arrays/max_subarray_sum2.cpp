#include<iostream>
using namespace std;

int main(void){
    int n;
    cin>>n; // Size of the Array

    int arr[n]; // Array of size n
    int cs[n]={0}; // Cumilative Sum Array

    // Input first element seperately
    cin>>arr[0];
    cs[0] = arr[0];

    // Input the elements of the Array
    for(int i=1;i<n;i++){
        cin>>arr[i];
        cs[i]= cs[i-1] + arr[i];
    }

    // Here we will find the sum 
    // using cumilative sum - Precomputing

    return 0;
}