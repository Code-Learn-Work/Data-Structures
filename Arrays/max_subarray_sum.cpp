#include<iostream>
using namespace std;

int main(void){
    int n;
    cin>>n; // Size of the Array

    int arr[n]; // Array of size n

    // Input the elements of the Array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // Declare 2 variables
    // maximumsum and curretsum and 
    // assign minimum values
    int maximumsum = INT16_MIN;
    int currentsum = INT16_MIN;

    // Declare 2 variables for printing
    // the subarray having maximum sum
    int left = INT16_MIN;
    int right = INT16_MIN;

    // Finding the Maximum Sum SubArray
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            currentsum = 0;
            for(int k=i;k<=j;k++){
                currentsum+=arr[k];
            }
            // Update the maximumsum if
            // currentsum > maximumsum
            if(maximumsum<currentsum){
                maximumsum = currentsum;
                left=i;
                right=j;
            }
        }
    }

    // Print the Maximum Sum
    cout<<"Maximum sum = "<<maximumsum<<endl;

    // Print the subarray
    for(int i=left;i<=right;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;

    return 0;
}