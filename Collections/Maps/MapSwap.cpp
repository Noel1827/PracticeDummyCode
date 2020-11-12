#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<char, int> mymap;
    mymap = {
        {'a', 10},
        {'b', 20},
        {'c', 30},
        {'d', 40},
    };
    map<char, int> m2;

    for (auto i = mymap.begin(); i != mymap.end(); i++)
    {
        cout << i->first << ": " << i->second << endl;
    }
    mymap.size();
    mymap.swap(m2);

    cout << "After Swap" << endl;
    cout << mymap.size() << endl;
    return 0;
}