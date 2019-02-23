#include<iostream>
using namespace std;

int main(void){
    int n;
    cin>>n; // Input Size of Array

    int arr[n]; // Declare an Array of size n

    // Input the elements in the Array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // Finding the SubArrays
    for(int i=0;i<n;i++){ // Loop for the starting point
        for(int j=i;j<n;j++){ // Loop for ending point
            for(int k=i;k<=j;k++){ // Loop for printing the subarray
                cout<<arr[k]<<",";
            }
            cout<<endl;
        }
    }
}