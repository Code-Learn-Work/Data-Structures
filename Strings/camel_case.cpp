#include<iostream>
#include<string>
using namespace std;

int main(void){
    // Declare and Input a
    // Camel Cased String
    string s;
    cin>>s;

    for(int i=0;i<s.length();i++){
        if(s[i]>='A' and s[i]<='Z'){
            cout<<endl;
        }
        cout<<s[i];
    }
}