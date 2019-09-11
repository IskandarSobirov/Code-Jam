#include<bits/stdc++.h> 
using namespace std; 

int main()
{

  int T, N, first,second;

  cin>>T; 
  while(T--)
  {
      cin>>N; 
      int arr[N];
      cout<<"Q ";
      for(int i = 0; i < N; i++)
        {
            cout<<1<<" "; 
        }
        cout<<endl;

    cin>>first;
    
    cout<<"Q ";
    for(int i = 0; i < N; i++)
    {
        for(int j =0; j < N; j++)
        {
            if(i==j)
              cout<<0<<" ";
            else 
              cout<<1<<" ";
        }
        cout << endl;
        cin >> second;

        if(first > second)
            arr[i] = 1;
        else 
            arr[i] = 0;

    }

    cout<<"A ";
    for(int i = 0; i < N; i++)
      cout<<arr[i]<<" ";

    cout<<endl;
  }

 



  return 0;
}