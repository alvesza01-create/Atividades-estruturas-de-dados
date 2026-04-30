#include<iostream>
using namespace std;

double calcularMedia(double numero1, double numero2) {
    return (numero1 + numero2) / 2.0;
}


int main(){
    double valor1 = 5.5;
    double valor2 = 7.0;

    double resultado = calcularMedia(valor1, valor2);

    cout << "A media de " << valor1 << " e " << valor2 << " e igual a " << resultado << endl;

    return 0;
}
    
