/*
A B C D 
B C D E 
C D E F 
D E F G 
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

     char c = ('A'+ i -j );
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
