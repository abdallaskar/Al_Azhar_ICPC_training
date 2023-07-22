#include <bits/stdc++.h>
 
using namespace std ;
 
 
int main()
{
   string f1,l1,f2,l2;
   cin>>f1>>l1>>f2>>l2;
   int coun=0;
 
   for(int i = 0 ; i <l2.length() ;i++){
     if(l1.length()==l2.length() && l1[i]==l2[i])
           coun++;
 
   }
    if(coun==l1.length() && coun == l2.length())
       cout<<"ARE Brothers"<<endl;
       else
       cout<<"NOT"<<endl;
 
     return 0 ;
 
}
 