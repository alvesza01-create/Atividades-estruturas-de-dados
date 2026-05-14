#include <iostream>

using namespace std;


long long calcularFatorial(int n) {

    if (n <= 1) {
        return 1;
    }
    
    return n * calcularFatorial(n - 1);
}

int main() {
    int numero = 15;
    
    cout << "Calculando o fatorial de " << numero << "..." << endl;
    cout << numero << "! = " << calcularFatorial(numero) << endl;

    return 0;
}
