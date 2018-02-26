/*
 * LacosAninh_Arrays.cpp
 *
 *  Created on: 26 de fev de 2018
 *      Author: kryptonian
 */

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int a, b, cnt = 0;

int main(){

	int mega[6][6] = {};
	srand(time(NULL));
	for (a = 0; a < 6; a++){
		for (b = 0; b < 6; b++){
			mega[a][b] = rand() % 60 + 1;
		}
	}

	cout << "\nAbaixo segue o conteúdo aleatório de uma matriz 6x6\n\n";
	for (a=0; a < 6; a++){
		for (b = 0; b < 6; b++){
			cout << mega[a][b] << " ";
			cnt++;
			if (cnt % 6 == 0){
				cout << endl;
				}
			// cout << "Valor contido na posição " << a << "," << b << " => " << mega[a][b] << endl;
		}
	}
}
