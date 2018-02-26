/*
 * ContProgr.cpp
 *
 *  Created on: 25 de fev de 2018
 *      Author: kryptonian
 *
 *  Contagem regressiva
 *
 */

#include <iostream>

using namespace std;

int main(){

	cout << "\nContagem progressiva, de 0 a 60" << endl;
	cout << "\nContagem de 10 números por linha..." << endl;
	cout << "\n\n";
	for (int c = 1; c <= 60; c++){
		cout << c << " ";
		if (0 == c % 10){
			cout << endl;
		}
	}
}
