/*
 * DetectorNumPrimo.cpp
 *
 *  Created on: 17 de fev de 2018
 *      Author: kryptonian
 */

#include <iostream>
using namespace std;

int num, ini, cnt;

int main(){
	cout << "\n************************************" << endl;
	cout << "**** Detector de números primos ****" << endl;
	cout << "************************************" << endl;
	cout << "\nDigite um número: ";
	cin >> num;
	ini = num;

	cout << "\nOs seguintes números são divisíveis por " << ini << ": ";
	for (int c = 1; c < num + 1; c++ ){

		if (num % c == 0){
			cout << c << " ";
			cnt += 1;
		}
	}
	if (cnt == 2){
		cout << "\n\n" << ini << " É um número PRIMO.";
	} else {
		cout << "\n\n" << ini << " NÃO É um número PRIMO.";
	}

}
