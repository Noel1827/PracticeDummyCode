#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int query;
    int type;
    int x;
    set<int> queries;
    cin >> query;
    if (query >= 1 && query <= pow(10, 5))
    {
        for (int i = 0; i < query; i++)
        {
            cin >> type;
            cin >> x;
            if (type >= 1 && type <= 3 && x >= 1 && x <= pow(10, 9))
            {
                switch (type)
                {
                case 1:
                    queries.insert(x);
                    break;
                case 2:
                    queries.erase(x);
                    break;
                case 3:
                    set<int>::iterator it = queries.find(x);
                    if (it != queries.end())
                    {
                        cout << "Yes" << endl;
                    }
                    else
                        cout << "No" << endl;
                }
            }
        }
    }
    return 0;
}
