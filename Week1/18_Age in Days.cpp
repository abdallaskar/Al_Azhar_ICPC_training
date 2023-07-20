#include <bits/stdc++.h>
 
using namespace std ;
 
 
int main()
{
double x;
 
cin>>x;
 
int years=x/365;
 x=x-(years*365);
int month=x/30;
 x=x-(month*30);
 int day=x;
 
 cout<<years<<" years\n"<<month<<" months\n"<<day<<" days\n";
 
 
 
 
return 0 ;
 
}
 
 