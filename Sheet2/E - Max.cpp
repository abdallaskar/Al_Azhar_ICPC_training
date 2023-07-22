#include <bits/stdc++.h>

using namespace std ;

#define loop(n)    for(int i = 0 ; i < n ; i++)



int main(){

    cin.tie(0);
    cin.sync_with_stdio(0);

   int n,maxn=0,x;
   cin>>n;

   loop(n){
   cin>>x;
   if(x>=maxn)
    maxn=x;
   else
    maxn=maxn;
   

   }
  cout<<maxn<<"\n";

    return 0 ;
}




