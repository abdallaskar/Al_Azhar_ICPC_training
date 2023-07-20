#include <bits/stdc++.h>

using namespace std ;





int main(){

   int a,b,c,res;

    cin>>a>>b>>c;

       int arr[3]={a,b,c};

       sort(arr,arr+3);

       if(arr[2]>=(arr[0]+arr[1]))
         res = (arr[2]-(arr[0]+arr[1]))+1;
       else
         res=0;


  cout<<res;


    return 0 ;
}




