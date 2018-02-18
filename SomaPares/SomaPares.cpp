/*
 * SomaPares.cpp
 *
 *  Created on: 17 de fev de 2018
 *      Author: kryptonian
 */

#include <iostream>

using namespace std;

int cnt, soma;

int main(){

	for (int c = 1; c <= 500; c++){

		if (c % 2 == 0){

			cnt += 1;
			soma += c;

		}

	}
	cout << "\nExistem " << cnt << " números pares entre 1 e 500 (inclusive)" << endl;
	cout << "\nA soma entre todos os números pares é " << soma << endl;
}
