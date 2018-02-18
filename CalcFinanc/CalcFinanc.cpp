/*
 * CalcFinanc.cpp
 *
 *  Created on: 17 de fev de 2018
 *      Author: kryptonian
 */

#include <iostream>

using namespace std;

float casa, salario, prest, limite;
int anos;

int main(){

	cout << "\nQual o valor a ser financiado ? ";
	cin >> casa;
	cout << "\nInforme seu salário liquido: R$ ";
	cin >> salario;
	cout << "\nInforme em quantos anos: ";
	cin >> anos;

	prest = casa / (anos * 12);
	limite = salario * 0.3;

	// cout << "\nValor da prestação: R$ " << prest << endl;
	// cout << "\n30% do seu salário é de R$ " << limite << endl;

	cout.precision(2);
	cout << "\nO valor da prestação de um imóvel de R$ " << fixed << casa << "\nfinanciado em " << anos << " anos, é de R$ " << fixed << prest << endl;
	if (prest <= limite){
		cout << "\nO financiamento pode ser APROVADO !!" << endl;
	} else {
		cout << "\nO financiamento foi REPROVADO !!" << endl;
	}

}

