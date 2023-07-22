#include <bits/stdc++.h>

using namespace std ;





int main()
{

    int n;

    cin>>n;
    double res=0;
    int inte=0;
    int coun=0;

   for(int i = 1; i <=n ;i++){
        res=(n-(double)i)/(double)i ;
        inte=res;
     if(res==inte&&res!=0)
        coun++;
   }

    cout<<coun ;


    return 0 ;
}




