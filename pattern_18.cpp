/*
D 
C D 
B C D 
A B C D
*/

#include <iostream>

using namespace std;

int main()
{
int n;
cin>>n;
int i=1;
 while(i<=n){
          int j=1;

     char c = ('A'+ n - i );
     while(j<=i){
         cout<<c<<' ';
         c++;
         j++;
     }
     cout<<endl;
     i++;
 }
    return 0;
}
