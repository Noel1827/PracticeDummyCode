#include <iostream>
#include <vector>
using namespace std;

int ContainZ(vector<string> v, int index, string target)
{
    if (index < v.size())
    {
        if (v[index].compare(target) == 0)
            return index;
        else
            return ContainZ(v, index + 1, target);
    }
    else
        return -1;
}

int Contains(vector<string> v, string target)
{

    return ContainZ(v, 0, target);
}

int main()
{
    vector<string> v = {"Hello", "Hole", "puta"};
    int index = Contains(v, "Hole");
    cout << v[index]<< endl;
  
    return 0;
}