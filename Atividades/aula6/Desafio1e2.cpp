#include <iostream>
using namespace std;

int main() {
    // Desafio 1: Soma e Multiplicação
    int listaInt[5] = {2, 4, 6, 8, 10};
    int soma = 0, mult = 1;
    for(int i = 0; i < 5; i++) {
        soma += listaInt[i];
        mult *= listaInt[i];
    }
    cout << "Soma: " << soma << "\nMultiplicacao: " << mult << endl;

    // Desafio 2: Strings Invertidas (usando matriz de char)
    char listaStr[5][20] = {"Maca", "Banana", "Laranja", "Uva", "Pera"};
    cout << "\nLista Invertida: ";
    for(int i = 4; i >= 0; i--) {
        cout << listaStr[i] << " ";
    }
    cout << endl;
    return 0;
}
