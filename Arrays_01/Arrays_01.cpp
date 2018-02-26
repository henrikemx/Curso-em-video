/*
 * Arrays_01.cpp
 *
 *  Created on: 26 de fev de 2018
 *      Author: kryptonian
 */

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){

	int lista[60] = {};
	srand(time(NULL));

	for (int b = 1; b <= 60; b++){
		lista[b] = rand() % 60;
	}

	for (int c = 1; c <= 60; c++){
		cout << lista[c] << " ";
		if (c % 10 == 0){
			cout << endl;
		}
	}
}



