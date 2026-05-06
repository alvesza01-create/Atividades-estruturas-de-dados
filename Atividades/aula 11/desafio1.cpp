#include <iostream>

using namespace std;


long long fatorial(int n) {
  
    if (n <= 1) {
        return 1;
    }
    
    return n * fatorial(n - 1);
}

int main() {
    int num = 15;
    cout << "Calculando o fatorial de " << num << "..." << endl;
    cout << "Resultado: " << fatorial(num) << endl;

    return 0;
}
