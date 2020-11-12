#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<char, int> mymap;
    map<char, int>::iterator it;
    mymap = {
        {'a', 10},
        {'b', 20},
        {'c', 30},
        {'d', 40},
    };

    cout << "Before erasing the element" << endl;
    for (auto i = mymap.begin(); i != mymap.end(); i++)
    {
        cout << i->first << ": " << i->second << endl;
    }

    // it = mymap.find('b');
    // mymap.erase(it);
    mymap.erase('b');

    cout << "After erasing" << endl;
    for (auto i = mymap.begin(); i != mymap.end(); i++)
    {
        cout << i->first << ": " << i->second << endl;
    }

    return 0;
}