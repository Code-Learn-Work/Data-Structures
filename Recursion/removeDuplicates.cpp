#include<iostream>
using namespace std;

void removeDup(char*arr){
    if(arr[0]=='\0'){
        return;
    }

    if(arr[0] == arr[1]){
        int i=0;
        while(arr[i]!='\0'){
            arr[i] = arr[i+1];
            i++;
        }
        removeDup(arr);
    }
    removeDup(arr+1);
}

int main(){
    char s[] = "aabccba";
    removeDup(s);
    cout<<s<<endl;
}
