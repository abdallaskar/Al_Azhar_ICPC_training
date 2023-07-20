#include <bits/stdc++.h>
 
using namespace std ;
 
 
 
 
 
int main(){
 
    int a,b;
    char c;
 
    cin>>a>>c>>b;
 
switch(c)
{
  case 60 :
    if(a<b)
       cout<<"Right";
    else
        cout<<"Wrong";
 
  break;
 
  case 62 :
     if(a>b)
        cout<<"Right";
     else
        cout<<"Wrong";
  break;
  case 61 :
     if(a==b)
        cout<<"Right";
     else
        cout<<"Wrong";
  break;
 
}
 
    return 0 ;
}
 