#include <bits/stdc++.h>

using namespace std ;





int main()
{

    int n,coun=0,cheak=0;

    cin>>n;

    int arr[n]={0};

    for(int i = 0; i < n ;i++)
    {
       cin>>arr[i];
    }
    sort(arr,arr+n);

    cheak=arr[0]+arr[n-1];

    for(int i = 0; i < n-1 ;i++)
    {
        for(int j= i+1; j < n ;j++)
      {
        if( (arr[i]+arr[j]) == cheak )
            coun++;
      }


    }


    cout<<coun ;


    return 0 ;
    }




