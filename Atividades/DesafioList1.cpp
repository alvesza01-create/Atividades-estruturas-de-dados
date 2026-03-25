#include <iostream>
#include <list>
using namespace std;

int main() {
    list<string> palavras = {"Café", "Código", "C++", "Lógica", "Sucesso"};

    
    palavras.reverse();

    cout << "Lista Invertida: " << endl;
    for (const string& p : palavras) {
        cout << p << " ";
    }
    
    return 0;
}