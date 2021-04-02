#include <bits/stdc++.h>
using namespace std;

bool prime(int k)
{
   if(k<=1)
   {
      return false;    
   }    
   for(int i=2;i<=k/2;i++)
   {
      if(k%i==0)
      {
         return false;    
      }    
      
   }
   return true;
    
}


void printprime(int h)
{
   for(int i=2;i<=h;i++)   
   {
      if(prime(i))
      {
         cout<<i<<endl;    
      }    
   } 
    
    
    
}

int main()
{
   int n;
   cin>>n;
   printprime(n);
   
   return 0;    
    
    
}