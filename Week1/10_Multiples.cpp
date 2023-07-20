#include <bits/stdc++.h>
 
using namespace std ;
 
 
int main()
{
   int a,b;
   cin>>a>>b;
   double c= (double)a/b;
   double e= (double)b/a;
   int d=(int)a/b;
   int f=(int)b/a;
 
 
   if( c==d || e==f )
    cout<<"Multiples"<<endl;
   else
    cout<<"No Multiples"<<endl;
    
    
     return 0 ;
 
}
 