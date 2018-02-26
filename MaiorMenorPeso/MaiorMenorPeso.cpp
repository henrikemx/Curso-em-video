/*
 * MaiorMenorPeso.cpp
 *
 *  Created on: 24 de fev de 2018
 *      Author: kryptonian
 *
 *  Esta aplicação é baseada no exercicio 55 do curso de Python3
 *  Aqui, o usuário irá entrar com o valor de peso de diversas pessoas e,
 *  no final, a aplicação deverá retornar qual foi o Maior e o Menor peso
 *  apresentados.
 *
 */

#include <iostream>

using namespace std;

int main(){

	double peso, maior, menor;

	cout << endl;
	cout << "-----------------------" << endl;
	cout << " Apresentação de Pesos " << endl;
	cout << "-----------------------" << endl;
	for (int c = 1; c < 6; c++) {
		cout << "Informe o peso da " << c << "ª pessoa: ";
		cin >> peso;
		if (c == 1){
			maior = peso;
			menor = peso;
		} else {
			if (peso > maior) {
				maior = peso;
			}
			if (peso < menor) {
				menor = peso;
			}
		}
	}
	cout << "\n===========================";
	cout << "\nMaior peso foi de " << maior << " Kg.";
	cout << "\nMenor peso foi de " << menor << " Kg." << endl;
	cout << "\n===== Fim do Programa =====" << endl;
}

