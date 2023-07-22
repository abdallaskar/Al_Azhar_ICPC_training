#include <bits/stdc++.h>

using namespace std ;





int main()
{

    int n,d,coun=0;

    cin>>n>>d;

    int arr[n]={0};

    for(int i = 0; i < n ;i++)
    {
       cin>>arr[i];
    }
    for(int i = 0; i < n-1 ;i++)
    {
        for(int j= i+1; j < n ;j++)
      {
        if( abs(arr[i]-arr[j]) <= d )
            coun++;
      }


    }


    cout<<coun*2 ;


    return 0 ;
    }




