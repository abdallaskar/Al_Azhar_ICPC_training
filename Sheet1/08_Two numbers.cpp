#include <bits/stdc++.h>
 
using namespace std ;
 
 
 
 
 
int main()
{
 
   double a,b,div;
 
    cin>>a>>b;
 
    int num,floor,ceil,round;
 
    div=a/b;
    num=div;
 
    floor=num;
    if(div==num)
        ceil=num;
    else
     ceil=++num;
 
    if(div>=(floor+.5))
        round=ceil;
    else
        round=floor;
 
 
    cout<<"floor "<<a<<" / "<<b<<" = "<<floor<<"\n"<<"ceil "<<a<<" / "<<b<<" = "<<ceil<<"\n"<<"round "<<a<<" / "<<b<<" = "<<round<<"\n" ;
 
 
    return 0 ;
}
 