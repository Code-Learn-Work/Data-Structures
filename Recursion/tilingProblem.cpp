#include<iostream>
using namespace std;

int countWaysRec(int n,int m,int i){
    // Base Case
    if(i<m)
        return 1;
    else if(i==m){
        return 2;
    }

    
    int ans = countWaysRec(n,m,i-1) + countWaysRec(n,m,i-m);
    return ans;
}

int countWays(int n,int m){
    int count[n+1];
    count[0] = 0;

    for(int i=1;i<=n;i++){
        if(i>m)
            count[i] = count[i-1] + count[i-m];
        else if(i<m){
            count[i] = 1;
        }
        else{
            count[i] = 2;
        }

    }
    return count[n];
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int n,m;
        cin>>n>>m;
        cout<<countWays(n,m)<<endl;
        cout<<countWaysRec(n,m,0)<<endl;
    }
}