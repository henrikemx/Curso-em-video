/*
 * Fatorial.cpp
 *
 *  Created on: 11 de fev de 2018
 *      Author: kryptonian
 */

#include <iostream>
using namespace std;

int main(){

	cout << "===========================" << endl;
	cout << "    Calculando Fatorial" << endl;
	cout << "===========================" << endl;

	int c, n, f;
	cout << "Informe de qual número deseja calcular seu fatorial: ";
	cin >> n;
	c = n;
	cout << "\nO Fatorial de " << n << "!" << endl;
	cout << endl;
	while (c > 0){
		cout << c;
		if (c > 1)
			cout << " x ";
		else
			cout << " = ";
		f *= c;
		c -= 1;
	}
	cout << f;
}
