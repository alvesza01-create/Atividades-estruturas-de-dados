#include <iostream>

using namespace std;


int calcularSoma(int vetor[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma;
}

int main() {
    int n;

    cout << "Digite a quantidade de elementos do vetor: ";
    cin >> n;

    int meuVetor[n];

    
    for (int i = 0; i < n; i++) {
        cout << "Digite o valor para a posicao " << i << ": ";
        cin >> meuVetor[i];
    }

    
    int resultado = calcularSoma(meuVetor, n);

    cout << "\nA soma de todos os elementos e: " << resultado << endl;

    return 0;
}