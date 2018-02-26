/*
 * JogoAdivinhacao_V1.0.cpp
 *
 *  Created on: 25 de fev de 2018
 *      Author: kryptonian
 *
 *  Nessa versão do jogo da adivinhação, ao invés de tentarmos adivinhar o numero a cada roada,
 *  iremos fazer com que o computador "adivinhe" somente 1x, enquanto o usuário irá eecutar diversas
 *  tentaivas de adivinhar o numero gerado pelo computador.
 *
 *  Nesse caso, o computador irá dar dicas ao usuário, se o número está acima ou abaixo do numero gerado (pensado).
 *
 */

#include <iostream>
#include <ctime>
#include <cmath>
#include <cstdlib>
#include <windows.h>

using namespace std;

int cpu, usuario, palpites;
boolean acertou;

int main(){

	srand(time(NULL));
	cpu = rand() % 10;

	cout << endl;
	cout << " ==== Jogo da Adivinhação ====" << endl;
	cout << "Aguarde... estou pensando em um número de 0 a 10 !!!" << endl;
	Sleep(2000);
	acertou = false;

	while (! acertou) {

		// aqui, é solicitado ao usuário, que adivinhe o número...

		cout << "Adivinhe o número em que pensei: [de 0 a 10]  ";
		cin >> usuario;

		// aqui vai a lógica que irá definir a variável "acertou", caso o jogador ganhe.
		palpites += 1;

		if (cpu == usuario){
			acertou = true;
		} else {
			if (usuario > cpu) {
				cout << "ERROU !! Menos..." << endl;
			}
			if (usuario < cpu){
				cout << "ERROU !! Mais..." << endl;
			}
		}
	}

	if (palpites == 1){
		cout << "\nParabéns !! Voce acertou na primeira tentativa !!" << endl;
	} else {
		cout << "\nACERTOU com " << palpites << " palpites !!" << endl;
	}
	cout << "\n==== Fim do Programa ====" << endl;
	cout << endl;
}
