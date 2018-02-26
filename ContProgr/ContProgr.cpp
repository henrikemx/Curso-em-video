/*
 * ContProgr.cpp
 *
 *  Created on: 25 de fev de 2018
 *      Author: kryptonian
 *
 *  Contagem progressiva
 *
 */

#include <iostream>

using namespace std;

int main(){

	int cnt = 0;

	cout << "Contagem progressiva, de 0 a 50" << endl;
	for (int c = 0; c < 51; c++){
		cout << c << " ";
		cnt += 1;
	}
	cout << "\nExistem " << cnt << " números dentro dessa faixa." << endl;
}
