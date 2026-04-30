#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    string expressao = "{[()]}"; 
    stack<char> pilha;

    for (int i = 0; i < expressao.length(); i++) {
        char carac = expressao[i];

        if (carac == '(' || carac == '[' || carac == '{') {
            pilha.push(carac);
        }
        else if (carac == ')' || carac == ']' || carac == '}') {
            if (pilha.empty()) {
                cout << "FIM" << endl;
                return 0;
            }

            char topo = pilha.top();
            if ((carac == ')' && topo == '(') ||
                (carac == ']' && topo == '[') ||
                (carac == '}' && topo == '{')) {
                pilha.pop();
            } else {
                cout << "FIM" << endl;
                return 0;
            }
        }
    }

    if (pilha.empty()) {
        cout << "Pilha Vazia" << endl;
    } else {
        cout << "FIM" << endl;
    }

    return 0;
}
