#include<bits/stdc++.h> 
#include<unordered_set>
using namespace std; 

int main()
{
  
  unordered_set<int> myset;


  int num; 
  int size;
  int max = 0;
  cout<<"Enter size: ";
  cin>>size;
  for(int i=0; i<size; i++)
  {
    cin>>num; 
    if( num > max)
      max = num;

  myset.insert(num);
 }  

    for(int i=1; i<=max + 1; i++)
    {
        
        if(auto itr = myset.find(i) == myset.end()){
          cout<<i<<endl;
          break;
        } 
        
    }

  return 0;
}