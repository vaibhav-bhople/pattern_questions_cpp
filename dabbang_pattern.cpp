/*

    1 2 3 4 5 1 2 3 4 5 
    1 2 3 4 * * 1 2 3 4 
    1 2 3 * * * * 1 2 3 
    1 2 * * * * * * 1 2 
    1 * * * * * * * * 1

*/

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    int i=n;
    while(i>=1){
        
        // 1st triangle
        int j=1;
        while(j<=i){
            cout<<j<<" ";
            j++;
        }
        
        // 2nd triangle
        int k=n-i;
        while(k){
            cout<<"*"<<" ";
            k--;
        }
        
        // 3rd triangle
        int l=n-i;
        while(l){
            cout<<"*"<<" ";
            l--;
        }
        
        // 4th triangle
        int m=i;
        while(m>=1){
            cout<<i-m+1<<" ";
            m--;
        }
        
        cout<<endl;
        i--;
    }
    
    return 1;
}