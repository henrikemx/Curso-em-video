/*
 * JogoAdivinhacao.cpp
 *
 *  Created on: 24 de fev de 2018
 *      Author: kryptonian
 *
 *  Este código foi baseado no exercicio 58 do curso de Python3
 *  A proposta é desenvolver um código que emule o jogo da adivinhação
 *  onde o usuário tenta adivinhar o nunero em que o computador está
 *  "pensando". A condição para encerrar o programa será quando o
 *  usuário errar e, no final, apresentar uma estatística do número
 *  de tentativas e numero de acertos.
 *
 */

#include <iostream>
#include <ctime>
#include <cmath>
#include <cstdlib>

using namespace std;

int main(){

	int cpu, usuario, cnt, vit = 0, derr = 0;
	string resp = "s";

	do {
		cout << endl;
		cout << " ==== Jogo da Adivinhação ====" << endl;
		cout << "Adivinhe o número em que pensei: [de 0 a 10]  ";
		cin >> usuario;
		srand(time(NULL));
		cpu = rand() % 10;
		if (cpu == usuario){
			cout << "ACERTOU !! Pensei no nº " << cpu << endl;
			vit += 1;
		} else {
			cout << "ERROU !! Eu pensei no número " << cpu << endl;
			derr += 1;
		}
		cout << endl;
		cout << "Continua ? [S/N]  ";
		cin >> resp;
		cnt += 1;
	} while (resp == "s");

	cout << endl;
	cout << "==== Fim do Programa ====" << endl;
	cout << "\nVoce jogou " << cnt << "x, GANHOU " << vit << "x e PERDEU " << derr << "x" << endl;
	//cout << "Voce " << vit << "x" << endl;
	// cout << "Voce " << derr << "x" << endl;
}


