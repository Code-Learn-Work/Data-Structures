#include<iostream>
using namespace std;

void selectionSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        // Assume the ith element as min
        int minIndex = i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[minIndex]){
                minIndex = j;
            }
        }

        // Swap both values
        // minIndex min element
        swap(a[minIndex],a[i]);
    }
}

int main(){
    int a[] = {5,4,1,2,3};
    int n = 5;

    selectionSort(a,n);
    cout<<"Sorted Array : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}