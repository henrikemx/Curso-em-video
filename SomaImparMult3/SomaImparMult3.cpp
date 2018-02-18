/*
 * SomaImparMult3.cpp
 *
 *  Created on: 17 de fev de 2018
 *      Author: kryptonian
 *
 *  Este código foi baseado no exercicio 48 da curso de Python3
 *  O objetivo é obter, de uma lista de números de 1 a 500 (inclusive), todos os multiplos de 3 e, ao final, somar todos que forem ímpares.
 *
 */

#include <iostream>

using namespace std;

int cnt, soma;

int main(){

	for (int c = 1; c <= 500; c++){

		if (c % 3 == 0){

			cnt += 1;
			soma += c;

		}

	}
	cout << "\nExistem " << cnt << " números multiplos de 3 entre 1 e 500 (inclusive)" << endl;
	cout << "\nA soma entre todos os números multiplos de 3 é " << soma << endl;
}
