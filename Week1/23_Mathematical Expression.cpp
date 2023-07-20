#include <bits/stdc++.h>
 
using namespace std ;
 
 
 
 
 
int main(){
 
    int a,b,e;
    char c,q;
 
    cin>>a>>c>>b>>q>>e;
 
switch(c)
{
  case 43 :
    if(a+b==e)
       cout<<"Yes";
    else
        cout<<a+b;
 
  break;
 
  case 45 :
     if(a-b==e)
        cout<<"Yes";
     else
        cout<<a-b;
  break;
  case 42 :
     if(a*b==e)
        cout<<"Yes";
     else
        cout<<a*b;
  break;
 
}
 
    return 0 ;
}
 
 