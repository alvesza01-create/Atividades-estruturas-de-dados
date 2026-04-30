include<iostream>
#include<clocale>

using namespace std;

int main(){
   setlocale(LC_ALL,"portuguese");
   float num[6];
   float soma;
   float maior, menor; 

   for (int i =0; i<5; i++){
    cout << "digite o elemento: ";
    cin >> num[i];
    soma +=num[i];
   
      if (i == 0){
        maior = num[i];
        menor = num[i];
      }else{
        if(num[i]> maior){ 
            maior = num[i];
        }
        if(num[i] < menor){
            menor = num[i];
        }
      }
    }
       cout << "\nSoma: " << soma << endl;
       cout << "\nmaior: " << maior << endl;
       cout << "\nmenor: " << menor << endl;

    return 0;
}
