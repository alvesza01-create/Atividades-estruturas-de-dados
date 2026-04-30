#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    stack<string> pilha1;
    stack<string> pilha2;
    stack<string> aux;

    pilha1.push("Manga");
    pilha1.push("Uva");
    pilha1.push("Banana");
    pilha1.push("Maçã");
    pilha1.push("Pera");
    pilha1.push("Laranja");

    pilha2.push("Abacate");
    pilha2.push("Mamão");
    pilha2.push("Melancia");
    pilha2.push("Kiwi");
    pilha2.push("Morango");
    pilha2.push("Abacaxi");

    string f1 = pilha2.top(); 
    pilha2.pop();
    string f2 = pilha2.top(); 
    pilha2.pop();
    pilha1.push(f1);
    pilha1.push(f2);

    while (!pilha1.empty()) {
        aux.push(pilha1.top());
        pilha1.pop();
    }

    string m1 = aux.top(); 
    aux.pop();
    string m2 = aux.top(); 
    aux.pop();

    while (!aux.empty()) {
        pilha1.push(aux.top());
        aux.pop();
    }

    while (!pilha2.empty()) {
        aux.push(pilha2.top());
        pilha2.pop();
    }

    pilha2.push(m1);
    pilha2.push(m2);

    while (!aux.empty()) {
        pilha2.push(aux.top());
        aux.pop();
    }

    return 0;
}
