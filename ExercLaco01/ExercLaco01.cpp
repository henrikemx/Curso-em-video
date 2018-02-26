/*
 * ExercLaco01.cpp
 *
 *  Created on: 25 de fev de 2018
 *      Author: kryptonian
 */

#include <iostream>

using namespace std;

int main(){

	int par, impar;

	for (int c = 0; c < 101; c++) {
		if (c % 2 == 0){
			par += 1;
			// cout << c << " é PAR " << endl;
		} else {
			impar += 1;
			//cout << c << " é IMPAR " << endl;
		}
	}
	cout << "Existe " << par << " números pares nessa faixa." << endl;
	cout << "Existe " << impar << " números ímpares nessa faixa." << endl;
}
