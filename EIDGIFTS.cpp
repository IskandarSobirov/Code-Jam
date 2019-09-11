#include <iostream>
using namespace std;

bool isfair(int arr[]);

int main() {
	
	int cases; int arr[6];
	
	cin>>cases; 
	while(cases--)
	{
	    
	    for(int i = 0; i < 6; i++)
	        cin>>arr[i];
	   
	    
	    if(isfair(arr)) 
	        cout<<"FAIR"<<endl;
	    else 
	        cout<<"NOT FAIR"<<endl;
	    
	    
	}
	
	
	return 0;
}


bool isfair(int arr[])
{
 
  if(((arr[0] < arr[1] && arr[3] < arr[4]) || 	(arr[0] == arr[1] && arr[3] == arr[4]) 
	      ||	(arr[0] > arr[1]  && arr[3] > arr[4])) 
	    && 
		((arr[1] < arr[2] && arr[4] < arr[5]) || (arr[1] == arr[2] && arr[4] == arr[5]) 
				||	(arr[1] > arr[2] && arr[4] > arr[5])) 
		&&
		((arr[0] < arr[2] && arr[3] < arr[5]) || (arr[0] == arr[2] && arr[3] == arr[5]) 
				||	(arr[0] > arr[2] && arr[3] > arr[5]))) return true;

		return false;	
}


	