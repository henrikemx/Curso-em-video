/*
 * MeagaS_teste.cpp
 *
 *  Created on: 26 de fev de 2018
 *      Author: kryptonian
 *
 *  Código-fonte: https://www.vivaolinux.com.br/script/Mega-Sena
 *
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int i, j, sort[6];

int main() {

	int igual;

	srand(time(0));

	do {
		for (i = 1; i <= 6; i++) {
			sort[i] = rand() % 60 + 1;
		} // este laço irá gerar os numeros aleatórios que serão armazenados nas 6 posições do Array

		igual = 0;

		// este laço será resposavel por testar se algum numero se repete dentro do Array
		for (i = 1; i <= 6; i++) {
			for (j = i + 1; j <= 6; j++) {
				if (sort[i] == sort[j]) {
					igual++;
				}
			} // fim do for
		} // fim do for

	} while (igual > 0); // Se números iguais foram sorteados, o sorteio será ralizado novamente

	cout << "==== Gerador de Números da MegaSena ====" << endl;
	cout << "\n==== Números Sorteados => ";
	for (int c = 1; c <= 6; c++) {
		cout << sort[c] << " ";
		if (c % 6 == 0) {
			cout << endl;
		}
	}
	cout << "\n========================================" << endl;
	system("pause");
	return 0;
} // fim do void sorteio
