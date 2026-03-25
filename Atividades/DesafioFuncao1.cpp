#include<iostream>
using namespace std;


float soma(float a, float b) {
    float ResultadoSoma = a + b;
    return ResultadoSoma;
}

float subtracao(float a, float b) {
    float ResultadoSubtracao = a - b;
    return ResultadoSubtracao;
}
float multiplicacao(float a, float b) {
    float ResultadoMultiplicacao = a * b;
    return ResultadoMultiplicacao;
}
float divisao(float a, float b) {
    if (b != 0) {
        float ResultadoDivisao = a / b;
        return ResultadoDivisao;
    } else {
        cout << "Erro: Divisão por zero!" << endl;
        return 0; 
    }
}

int main(){
   
    float x =5;

    float y =3;

    float resultado = soma(x,y);
    cout << "A soma de " << x << " e " << y << " e " << resultado << endl;

    float resultadoSubtracao = subtracao(x,y);
    cout << "A subtracao de " << x << " e " << y << " e " << resultadoSubtracao << endl;

    float resultadoMultiplicacao = multiplicacao(x,y);
    cout << "A multiplicacao de " << x << " e " << y << " e " << resultadoMultiplicacao << endl;

    float resultadoDivisao = divisao(x,y);
    cout << "A divisao de " << x << " e " << y << " e " << resultadoDivisao << endl;
    return 0;
    
}