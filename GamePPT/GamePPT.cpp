/*
 * GamePPT.cpp
 *
 *  Created on: 24 de fev de 2018
 *      Author: kryptonian
 *
 *  Desenvolvimento do famoso jogo "Pedra, papel ou tesoura", à partir da lógica desenvolvida no exercicio 45 do curso de Python3, Mundo 2
 *
 */

#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	int jog;
	// montando o menu de escolha
	cout << "---------------------" << endl;
	cout << "[0] Pedra" << endl;
	cout << "[1] Papel" << endl;
	cout << "[2] Tesoura" << endl;
	cout << "---------------------" << endl;
	cout << "Faça sua escolha: ";
	cin >> jog;
	cout << endl;

	string texto[] = {"Jo... ", "Ken... ", "Po !!"};
	int cnt = 0;

	for (int c = 0; c < 3; c++){
		cout << texto[cnt];
		cnt += 1;
	}


	// Regra para vencer o jogo:
	// Pedra ganha da Tesoura (a amassa e quebra)
	// Tesoura ganha do Papel (o corta)
	// Papel ganha da Pedra (a embrulha)

	// Lógica da escolha do computador (cpu)
	string itens[] = {"Pedra", "Papel", "Tesoura"};
	srand(time(NULL));
	int cpu;
	cpu = rand() % 3;

	Sleep(500);
	cout << "\n\n--------------------------------";
	cout << "\nO Computador escolheu " << itens[cpu];
	cout << "\nVoce escolheu " << itens[jog];
	cout << "\n--------------------------------\n" << endl;
	Sleep(1000);

	// Lógica do jogo
	if (cpu == 0) {
		if (jog == 0) {
			cout << "EMPATE !!" << endl;
		} if (jog == 1) {
			cout << "Voce GANHOU !!" << endl;
			cout << itens[jog] << " ganha de " << itens[cpu] << endl;
		} if (jog == 2) {
			cout << "Voce PERDEU !!" << endl;
			cout << itens[cpu] << " ganha de " << itens[jog] << endl;
		}
	}
	if (cpu == 1) {
		if (jog == 0) {
			cout << "Voce PERDEU !!" << endl;
			cout << itens[cpu] << " ganha de " << itens[jog] << endl;
		} if (jog == 1) {
			cout << "EMPATE !!" << endl;
		} if (jog == 2) {
			cout << "Voce GANHOU !!" << endl;
			cout << itens[jog] << " ganha de " << itens[cpu] << endl;
		}
	}
	if (cpu == 2) {
		if (jog == 0) {
			cout << "Voce GANHOU !!" << endl;
			cout << itens[jog] << " ganha de " << itens[cpu] << endl;
		} if (jog == 1) {
			cout << "Voce PERDEU !!" << endl;
			cout << itens[cpu] << " ganha de " << itens[jog] << endl;
		} if (jog == 2) {
			cout << "EMPATE !!" << endl;
		}
	}
}
