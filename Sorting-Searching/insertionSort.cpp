#include<iostream>
using namespace std;

void insertionSort(int a[],int n){
    for(int i=1;i<n;i++){
        int j = i+1;
        int num = a[i];
        while(j>=0 && a[j]>num){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = num;
    }
}

int main(){
    int a[] = {5,4,1,2,3};
    int n = 5;

    insertionSort(a,n);
    cout<<"Sorted Array : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}