#include <iostream>

using namespace std;

int fibonacci(int n) {
n
    if (n <= 1) {
        return n;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int posicao = 9;
    cout << "Buscando o valor na posicao " << posicao << " de Fibonacci..." << endl;
    cout << "O valor e: " << fibonacci(posicao) << endl;

    return 0;
}
