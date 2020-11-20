#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

int main()
{
    // int newints[] = {50, 60, 70, 80};
    // int *q;
    // q = find(newints, newints + 4, 60);
    // if (q != newints + 40){
    //     cout << "Element found in newints: " << *q << "\n";
    // }else cout << "Element not found in newints \n";

    // vector<int> newvector(newints, newints + 4);
    // vector<int>::iterator ti;
    // ti = find(newvector.begin(), newvector.end(), 60);
    // if (ti != newvector.end()){
    //     cout << "Element found in newvector " << *ti << "\n";
    // } else
    //     cout << "Element not found in newvector \n ";

    vector<int> vct{50, 60, 70, 80};
    vector<int>::iterator it;
    cout << "Initial vector: ";
    for (int k = 0; k < vct.size(); k++)
        cout << " " << vct.at(k);
    cout << "\n";

    int sr = 60;

    it = find(vct.begin(), vct.end(), sr);

    if (it != vct.end()){
        cout << "The element " << *it << " has been found at position: ";
        cout << it - vct.begin() + 1 << endl;
    }else cout << "Element does not exist. ";

    return 0;
}