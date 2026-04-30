#include <iostream>
#include <list>
using namespace std;
int main() {
    list<int> listaA = {15, 2, 88, 10, 3};
    list<int> listaB = {42, 7, 1, 19, 5};

   
    listaA.splice(listaA.end(), listaB);

    
    listaA.sort();

    cout << "Lista C Ordenada: ";
    for (int n : listaA) {
        cout << n << " ";
    }

    return 0;
}
