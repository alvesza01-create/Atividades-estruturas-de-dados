#include<iostream>
#include<clocale >

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	int dia;
	
	cout << "\ndigite o número do dia da semana (1 a 7):  ";
	cin >> dia;
	
	if (dia >= 1 && dia <=7) {
		cout << "\n Domingo" << endl;
	}else if(dia == 2){
		cout <<"\nSegunda Feira" << endl;
	}else if(dia ==3 ){
		cout <<"\nTerça Feira" << endl;
	}else if(dia == 4){
		cout <<"\nQuarta Feria" << endl;
	}else if(dia == 5){
	    cout <<"\nQuinta Feira"	<< endl;
	}else if(dia == 6){
	    cout <<"\nSexta Feira" <<endl;	
	}else if(dia == 7){
	
		cout <<"\n Sábado" << endl;
	 }else {
		cout <<"\n Número Invalido" << endl;
	}
	
	
	return 0;
}
