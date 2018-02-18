// Este exercicio é para treinar o conceito de "if aninhado"

#include <iostream>

using namespace std;

int ano, ano1, ano2;

int main(){

	cout << "Informe o ano: ";
	cin >> ano;

	ano1 = ano % 4;
	ano2 = ano % 100;

	// cout << "\nO ano informado foi: " << ano << endl;
	// cout << "\nO resto da divisão ano % 4 é: " << ano1 << endl;
	// cout << "\nO resto da divisão ano % 100 é: " << ano2 << endl;

	if (ano1 == 0){
		if (ano2 != 0){
			cout << "\nO ano informado (" << ano << ") é Bissexto !!" << endl;
		}
	} else {
		cout << "\nO ano informado (" << ano << ") não é Bissexto " << endl;
	}
}
