/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


/*

    1 2 3 4 5 1 2 3 4 5 
    1 2 3 4 * * 1 2 3 4 
    1 2 3 * * * * 1 2 3 
    1 2 * * * * * * 1 2 
    1 * * * * * * * * 1

*/


#include <iostream>

using namespace std;

void first(int n,int i){
        int x=n-i+1;
        for(int j=1;j<=x;j++){
            cout<<j<<" ";
        }
}

void second(int n, int i){
        for(int k=1;k<=i-1;k++){
            cout<<"*"<<" ";
        }
}

int main()
{   
    int n;
    cin>>n;
    
    
    for(int i=1;i<=n;i++){
        
        //first triangle
        first(n,i);
        //second triangle
        second(n,i);
        //third triangle
        second(n,i);
        //fourth triangle
        first(n,i);
        cout<<endl;
    }
    

    return 0;
}
