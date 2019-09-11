#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <utility>

using namespace std;

struct entry {
    string  key;
    string* vals;
    size_t  nvals;
};
#define NVAL(x) (sizeof(x)/sizeof(x[0]))

int main( void ) {
    // Create your data 
    string      usa[]      = {"NYC", "LA"};
    string      india[]    = {"Delhi", "Mumbai"};
    entry       dd[] = {
                          {"USA", usa, NVAL(usa)},
                          {"India", india, NVAL(india)}
                        };
    map<string, vector<string> > dict;

    // initialize the map
    for(unsigned int i=0; i<NVAL(dd); i++)
        dict.insert( make_pair(dd[i].key, vector<string>(dd[i].vals, dd[i].vals+dd[i].nvals)) );

    // Verify
    for( map<string,vector<string> >::const_iterator ptr=dict.begin();
         ptr!=dict.end(); ptr++) {
        cout << ptr->first << ": ";
        for( vector<string>::const_iterator eptr=ptr->second.begin();
             eptr!=ptr->second.end(); eptr++)
                cout << *eptr << " ";
        cout << endl;
    }
    return 0;
}