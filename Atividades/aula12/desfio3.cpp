#include <iostream>

using namespace std;


double calcularPotencia(double base, int expoente) {
    
    if (expoente == 0) {
        return 1;
    }

    return base * calcularPotencia(base, expoente - 1);
}

int main() {
    double a;
    int b;

    cout << "Calculo de Potencia (a^b)" << endl;
    cout << "Digite a base (a): ";
    cin >> a;
    cout << "Digite o expoente (b): ";
    cin >> b;

    
    if (b < 0) {
        cout << "Erro: O programa nao suporta expoentes negativos." << endl;
    } else {
        cout << "Resultado: " << calcularPotencia(a, b) << endl;
    }

    return 0;
}
