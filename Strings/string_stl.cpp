#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

bool compare(string a,string b){
    return a.length()>b.length(); // Decreasing order of length
}

int main(){
    // One way of declaration
    string s("Hello World!");

    string s1 = "Another String"; // Another way

    cout<<s<<" "<<s1<<endl;

    string s2;

    // getline(cin,s2);
    
    // cout<<s2<<endl;

    string arr[] = {"Apple","Pineapple","Mango","Guava","Banaaannnnnaa"};
    sort(arr,arr+5,compare);
    
    for(int i=0;i<5;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
    return 0;
}