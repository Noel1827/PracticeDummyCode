#include <iostream>
#include <set>

using namespace std;

int main()
{
    set <char> m;

    m.emplace('a');
    // hace lo mismo que insert, pero insert inserta una copia, esto hace otra cosa diferente

    return 0;

}