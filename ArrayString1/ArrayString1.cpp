/*
 * ArrayString1.cpp
 *
 *  Created on: 24 de fev de 2018
 *      Author: kryptonian
 *
 *  Apredendo a trabalhar com array de string
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

	/*
	string itens[] = {"Pedra", "Papel", "Tesoura"};
	cout << itens[0] << endl;
	cout << itens[1] << endl;
	cout << itens[2] << endl;
	*/

	/*
	 * Para fazer com que os valores gerados não se repitam precisamos usar a função srand a fim de inicializar a função rand com um valor “semente” para que se produza um valor aleatório na faixa determinada. A função srand recebe um argumento do tipo inteiro sem sinal, ou seja unsigned int.
	 */
	srand(time(NULL));

	int cnt;
	cout << "Gerando numeros aleatórios => ";
	for (int c = 0; c < 10; c++){
		cnt = rand() % 3;
		cout << cnt << ", ";
	}
}
