#include <iostream>
using namespace std;

// Desafio 3: Função com retorno
int calcularSoma(int v[], int n) {
    int s = 0;
    for(int i = 0; i < n; i++) s += v[i];
    return s;
}

// Desafio 5: Subtrair e Multiplicar
void operacoes(int v1[], int v2[], int n) {
    cout << "Subtracao: ";
    for(int i = 0; i < n; i++) cout << v1[i] - v2[i] << " ";
    cout << "\nMultiplicacao: ";
    for(int i = 0; i < n; i++) cout << v1[i] * v2[i] << " ";
    cout << endl;
}

// Desafio 6: Encontrar o Maior
int encontrarMaior(int v[], int n) {
    int maior = v[0];
    for(int i = 1; i < n; i++) if(v[i] > maior) maior = v[i];
    return maior;
}

// Desafio 7: Produto Escalar
int produtoEscalar(int v1[], int v2[], int n) {
    int pe = 0;
    for(int i = 0; i < n; i++) pe += (v1[i] * v2[i]);
    return pe;
}

int main() {
    int vet1[3] = {1, 2, 3}, vet2[3] = {4, 5, 6};
    cout << "Soma Vet1: " << calcularSoma(vet1, 3) << endl;
    operacoes(vet1, vet2, 3);
    cout << "Maior de Vet2: " << encontrarMaior(vet2, 3) << endl;
    cout << "Produto Escalar: " << produtoEscalar(vet1, vet2, 3) << endl;
    return 0;
}
