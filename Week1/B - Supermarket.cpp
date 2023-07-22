#include <bits/stdc++.h>

using namespace std ;





int main()
{

    int n;
    double f;
    double a,b;
    cin>>n>>f;

    double mine =200;

    for(int i = 0 ; i < n ; i++){
         cin>>a>>b;
         mine = min(mine,(a/b));
    }




    cout<<fixed<<setprecision(8)<< f*mine ;


    return 0 ;
}




