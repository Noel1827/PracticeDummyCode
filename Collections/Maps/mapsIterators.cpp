#include <iostream>
#include <set>
#include <map>

using namespace std;

int main()
{

    map<int, string> Employees;
    Employees[104] = "Hello";
    Employees[309] = "Noel";
    Employees[109] = "Baba";
    Employees[200] = "Contra";

// couts en orden
    for (map<int, string>::iterator ii = Employees.begin(); ii != Employees.end(); ii++)
    {
        cout << (*ii).first << ": " << (*ii).second << endl;
    }

    // couts en reverse
for(map<int,string>::reverse_iterator ii = Employees.rbegin(); ii != Employees.rend(); ii++){
    cout << (*ii).first << ": " << (*ii).second << endl;
}
    return 0;
}