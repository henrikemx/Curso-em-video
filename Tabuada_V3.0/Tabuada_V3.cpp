/*
 * Tabuada_V3.cpp
 *
 *  Created on: 11 de fev de 2018
 *      Author: kryptonian
 */

#include <iostream>
using namespace std;

int n, c;

int main(){
	cout << "**** Tabuada V3.0 ****" << endl;
	while (1){
		cout << "Informe de qual número deseja a Tabuada" << endl;
		cout << "Tabuada do => ";
		cin >> n;
		if (n < 0)
			break;
		cout << "-----------------------------" << endl;
		for (c = 1; c <= 10; c++){
			cout << n << " x " << c << " = " << n*c << endl;
		}
		cout << "-----------------------------" << endl;
	}
	cout << "\n=========================" << endl;
	cout << "**** Fim do programa ****" << endl;
}
