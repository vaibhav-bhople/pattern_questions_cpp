/*
D E F G 
C D E F 
B C D E 
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
     while(j<=n){
         cout<<c<<' ';
         c++;
         j++;
     }
     cout<<endl;
     i++;
 }
    return 0;
}
