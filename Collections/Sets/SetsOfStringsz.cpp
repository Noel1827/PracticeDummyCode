#include <iostream>
#include <set>

using namespace std;

int main()
{

    set<string> baba;
    baba.insert("Pute");
    baba.insert("Hello");
    baba.insert("ALondrra");
    baba.insert("Bello");
    baba.insert("Coca");
    for (set<string>::iterator p = baba.begin(); p != baba.end(); p++)
    {
        cout << *p << endl;
    }

    return 0;
}