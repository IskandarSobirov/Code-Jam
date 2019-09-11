#include <iostream>
#include<cmath>
using namespace std; 

int fib(int n)
{
    double phi = (1+sqrt(5)) / 2;
      return round(pow(phi,n) / sqrt(5));
}


int main ()
{

  int cases; 
  cin>>cases; int n;

  while(cases--)
  {
    cin>>n;
    cout<<endl;
      for(int i=0; i<n; i++)
        cout<<fib(i) % 10<<" ";
  }



  return 0;
}

