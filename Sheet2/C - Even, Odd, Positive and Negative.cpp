#include <bits/stdc++.h>

using namespace std ;

#define loop(n)    for(int i = 0 ; i < n ; i++)



int main(){

    cin.tie(0);
    cin.sync_with_stdio(0);

   int n,x, ev=0,od=0,po=0,neg=0;



    cin>>n;
    loop(n){
    cin>>x;

    if (x>0)
        po++;
    if (x<0)
        neg++;
     if (x%2==0)
        ev++;
     if(x%2!=0)
        od++;

    }


       cout<<"Even: "<<ev<<"\n"<<"Odd: "<<od<< "\n"<<"Positive: "<<po<<"\n"<<"Negative: "<<neg<<"\n";


    return 0 ;
}




