#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

int main()
{

    // Este compara los dos vectores y te devuelve un iterador al primero que se repita en los containers
//   int newchars[] = {'a','b','c','A','B','C'}; 
//     std::vector<char> haystack (newchars,newchars+6);  
//   std::vector<char>::iterator ti; 
//    int patt[] = {'A','B','C'};  
//    ti = find_first_of(haystack.begin(), haystack.end(), patt, patt+3); 
//    if(ti != haystack.end()){
//        cout << "Match is: " << *ti << endl;
//    }


 string str1 = "We are trying to get an idea of the  find_first_of function in C++";  
    string str2= {'a','A','e','E','i','I','o','O','u','U'};  
auto ti = find_first_of(str1.begin(), str1.end(), str2.begin(), str2.end());
if(ti != str1.end()){
cout << "First vowel has been discovered at index: " << ti-str1.begin() << endl;
}

    return 0;
}