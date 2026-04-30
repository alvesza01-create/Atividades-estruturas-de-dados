#include <iostream>
using namespace std;

void apresentarNomeCompleto(char n[], char s[]) {
    cout << "Nome Completo: " << n << " " << s << endl;
}

int main() {
    char nome[30], sobrenome[30];
    cout << "Digite o nome: ";
    cin >> nome;
    cout << "Digite o sobrenome: ";
    cin >> sobrenome;
    
    apresentarNomeCompleto(nome, sobrenome);
    return 0;
}
