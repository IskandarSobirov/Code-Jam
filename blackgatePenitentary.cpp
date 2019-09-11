#include<bits/stdc++.h> 
using namespace std; 


int main()
{
    int  height; string name; int numOfPrisoners;
    map<int,vector<string> > myMap; 
    vector<string>names;
    

      cin >> numOfPrisoners;
        for(int i = 0; i < numOfPrisoners; i++)
        {
             cin >> name >> height;
             

              //myMap.insert(make_pair(height,names));
              myMap[height].push_back(name);
        }
       
      int count = 1, c = 0;
      
      for( map<int, vector<string> >::iterator itr = myMap.begin(); 
          itr != myMap.end(); ++itr) 
      {
        vector<string> *ptr = &(itr->second); 
        sort(ptr->begin(), ptr->end());

        for(vector<string>::const_iterator itr2 = itr->second.begin(); 
        itr2 != itr->second.end(); itr2++,++c) 
        {
             cout << *itr2 <<" ";
        }
        cout<< count << ' ' << c << endl;
        count =  c + 1;
        //cout << endl;
    }


  return 0;
} 