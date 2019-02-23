#include<iostream>
using namespace std;

int main(void){
    // Declare the string
    string s;

    // Input the String
    cin>>s;

    int c=0; // Looping variable
    int count[26] = {0}; // Array maintaing the freq. of alphabets 
    int x; // Variable to store the numeric value of alphabet

    while(s[c]!='\0'){ // Looping till the end of string
        // Taking only the lowercase characters
        if(s[c]>='a' and s[c]<='z'){
            x = s[c]-'a'; // Convert char to int
            count[x]++; // Increment the value at that index
        }
        c++; // Increment the looping variable
    }

    // Performing Linear Search to
    // find the max occuring variable
    
    int max = count[0]; // Assign first number as max
    int index = 0; // set first index as index of max freq. char

    for(int i=0;i<26;i++){
        if(count[i]>max){

            // Swap values if they are 
            // smaller than before
            max = count[i];
            index = i;
        }
    }

    cout<<"Maximum Occuring Character in "<<s<<" is "<<char(index+'a')<<endl;

    return 0;
}