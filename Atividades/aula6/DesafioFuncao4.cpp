#include<iostream>
using namespace std;

bool ehPar(int numero) {
    return numero % 2 == 0;
}

int main() {

    int numero;

    cout << "Digite um numero: ";
    cin >> numero;

    if (ehPar(numero)) {
        cout << numero << " e par." << endl;
    } else {
        cout << numero << " e impar." << endl;
    }
    return 0;
}
