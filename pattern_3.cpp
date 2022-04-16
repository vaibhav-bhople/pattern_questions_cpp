/*
1 2 3 4 
1 2 3 4 
1 2 3 4 
1 2 3 4
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int i=1;
    
    while(i<=n){
        int j=1;
        int sum=0;
        while(j<=n){
            sum=sum+1;
            cout<<sum<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}