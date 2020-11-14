#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main()
{

    int query, type, x;
    int max = 0;
    stack<int> newstack;
    stack<int> storagestack;
    cin >> query;
    if (query >= 1 && query <= pow(10, 5))
    {
        for (int i = 0; i < query; i++)
        {
            cin >> type;

            if (type >= 1 && type <= 3)
            {
                switch (type)
                {
                case 1:
                    cin >> x;
                    if (x >= 1 && x <= pow(10, 9))
                        newstack.push(x);
                    break;
                case 2:
                    newstack.pop();
                    break;
                case 3:
                    int count = 0;

                    while (!newstack.empty())
                    {
                        storagestack.push(newstack.top());
                        newstack.pop();
                    }
                    while (count < storagestack.size())
                    {
                        if (max < storagestack.size())
                        {
                            max = storagestack.top();
                        }
                        count++;
                        storagestack.pop();
                    }
                    cout << max << endl;
                    max = 0;
                    break;
                }
            }
        }
    }
    return 0;
}
