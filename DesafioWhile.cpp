#include<iostream>

using namespace std;

int main (){
    int n;
    int soma = 0;
    int i = 1; 

    cout << "\ndigite o numero inteiro: ";
    cin >> n;

    while (i <= n){
        soma = soma +i;
        i++;
    }

    cout << "\nA soma total : " << soma<< endl;
    return 0;
}