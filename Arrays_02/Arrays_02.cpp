/*
 * Arrays_02.cpp
 *
 *  Created on: 26 de fev de 2018
 *      Author: kryptonian
 */

#include <iostream>
#include <ctime>
#include <cstdlib>


using namespace std;

int main(){

	int lista1[6] = {};
	srand(time(NULL));

	for (int b = 1; b <= 6; b++){
		lista1[b] = rand() % 60 + 1;
	}

	cout << "==== Gerador de Números da MegaSena ====" << endl;
	cout << "\n==== Números Sorteados => ";
	for (int c = 1; c <= 6; c++){
		cout << lista1[c] << " ";
		if (c % 6 == 0){
			cout << endl;
		}
	}
	cout << "\n========================================" << endl;
	system("pause");
	return 0;
}
