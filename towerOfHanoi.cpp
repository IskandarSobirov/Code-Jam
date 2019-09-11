#include<iostream>
using namespace std; 

void towerOfHanoi(int n, char from_Rod, char to_Road, char aux_Road);

int main()
{
  int n = 3; 
  
  towerOfHanoi(n,'A','C','B');

  return 0;
}

void towerOfHanoi(int n, char from_Rod, char to_Road, char aux_Road)
{ 
  
    if(n == 1)
    {
        cout<<"Move disk 1 from rod "<<from_Rod<<" to rod "<<to_Road<<endl;
        return;
    }
    towerOfHanoi(n-1,from_Rod,aux_Road,to_Road);
  
    cout<<"Move disk "<<n <<" from rod "<<from_Rod<<" to rod "<<to_Road<<endl;

    towerOfHanoi(n-1,aux_Road, to_Road, from_Rod);
}

