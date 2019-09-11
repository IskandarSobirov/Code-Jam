#include<bits/stdc++.h>
using namespace std;

int main()
{

  int cases, elements,size; 
  cin>>cases;
  while(cases--)
  {

      cin>>size>>elements;

      int arr[size];

      for(int i=0; i< size; i++)
      {   
          cin>>arr[i];
      }

      int sum,  minSum=10000, count=1;
      for(int i=0; i<size-1; i++)
      {   
          sum=0;
          for(int j=i+1; j<size; j++)
          {

              for(int d=j; d<elements;d++)
                sum+=arr[i] + arr[d];
          }
          if(minSum==sum) 
          {
            count++;
          }
          else 
          minSum=min(minSum,sum);
           cout<<"Sum is: "<<sum<<" Min sum is: "<<minSum<<endl;
      }

    cout<<count<<endl;
  }



  return 0;
}

