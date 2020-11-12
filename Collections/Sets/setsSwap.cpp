#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> m1 = {1, 2, 3, 4, 5, 6};

    set<int> m2;

    m2.swap(m1);
    // swap(m1,m2);

    cout << "Size of m1 = " << m1.size()<< " " << "Size of m2 = " << m2.size() << endl;

    for(auto it = m2.begin(); it != m2.end(); ++it){
        cout << *it << endl;
    }

    return 0;
}