#include <bits/stdc++.h>
 
using namespace std ;
 
 
 
 
 
int main(){
 
    long long a,b,c,d;
 
    cin>>a>>b>>c>>d;
 
    long long x ,y,r;
 
    x=(a%100)*(b%100);
    y=(c%100)*(d%100);
 
    r=(x*y)%100;
    if(r<10)
        cout<<0<<r;
    else
        cout<<r;
 
 
 
 
    return 0 ;
}
 
 