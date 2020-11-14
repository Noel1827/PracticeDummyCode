#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int Q;
    map<string, int>m;
    cin>>Q;
    for(int i = 0; i < Q; i++){
        int type;
        string x;
        cin>> type >> x;
        switch(type){
            case 1:
                int y;
                cin>>y;
                m[x] += y;
                break;
            case 2:
                m.erase(x);
                break;
            case 3:
                cout << m[x] << "\n";
                break;
        }
    }
}
