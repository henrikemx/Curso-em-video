/*
 * SeqFibonacci.cpp
 *
 *  Created on: 10 de fev de 2018
 *      Author: kryptonian
 *
 *  Desenvolva uma aplicação que gere a Sequencia de Fibonacci a partir de um número inteiro qualquer lido pelo teclado e mostre, no console, os n primeiros elementos da sequencia.
 *
 *  Ex.: 0 -> 1 -> 1 -> 2 -> 3 -> 5 -> 8...
 *
 */

#include <iostream>

using namespace std;

int main(){

	cout << "=================================" << endl;
	cout << "    Sequencia de Fibonacci" << endl;
	cout << "=================================" << endl;
	int n, t3, cont, t1, t2;
	t1 = 0;
	t2 = 1;
	cout << "\nQtos termos voce quer mostrar ? => ";
	cin >> n;
	cout << endl;
	cout << t1 << " -> " << t2;
	cont = 3;
	while (cont <= n){
		t3 = t1 + t2;
		cout << " -> " << t3;
		t1 = t2;
		t2 = t3;
		cont += 1;
	}
	cout << " -> Fim da sequencia !!!";
	return 0;
}
