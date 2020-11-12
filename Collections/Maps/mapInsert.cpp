#include <iostream>
#include <map>

using namespace std;

int main()
{
map<char,int> m = {
    {'a',1},
    {'b',2},
    {'c',3},
};

m.insert(pair<char,int>('d',4));
m.insert(pair<char,int>('e',5));

cout << "Map contains following elements" << endl;
for(map<char,int>::iterator ii = m.begin(); ii != m.end(); ii++){
    cout << (*ii).first << ": " << (*ii).second << endl;
}

// usando auto
for(auto i = m.begin(); i != m.end(); i++){
    cout << i->first << ": " << i->second << endl;
}
    return 0;
}