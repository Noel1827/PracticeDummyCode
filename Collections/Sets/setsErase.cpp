#include <iostream>
#include <set>

using namespace std;

int main()
{

    set<int> c;
    c.insert(5);
    c.insert(6);
    c.insert(1);
    c.insert(9);
    c.insert(0);
    c.insert(3);
    c.insert(6);

    c.size();

    c.find(5);

      set<int>::iterator i = c.find(5);
      c.erase(i);
    set<int>::iterator it = c.begin();

    while (it != c.end())
    {
        cout << *it << endl; 
        it++;
    }

    return 0;
}