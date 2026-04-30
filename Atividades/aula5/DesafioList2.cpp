#include <iostream>
#include <list>
using namespace std;
int main() {
    list<int> numeros = {10, 5, 8, 10, 3, 5, 1, 9, 8, 2};

    
    numeros.sort();
    
    
    numeros.unique();

    cout << "Lista sem duplicados: ";
    for (int n : numeros) {
        cout << n << " ";
    }
    
    return 0;
}
