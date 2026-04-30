#include<iostream>
#include<clocale>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	double nota;
	
	cout << "\nDigite a Nota: ";
	cin >> nota;
	
	string paridade = (nota >= 6) ? "\nAprovado" : "\nReprovado"; 
	
	cout << "\nA Pessoa com nota  " << nota << "  \nEstá  " << paridade << endl;
	
	return 0;
}
