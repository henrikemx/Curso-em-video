/*
 * MaiorMenor.cpp
 *
 *  Created on: 11 de fev de 2018
 *      Author: kryptonian
 *
 *  Este aplicativo tem a função de ler diversos números inseridos pelo teclado. Ao final da execução deverá exibir a média entre eles e, também, qual foi o MAIOR e o MENOR número inserido.
 *  Adicionalmente, o programa deverá perguntar se o usuário deseja, ou não, encerrar o programa.
 *
 */

#include <iostream>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

int n;
float soma, qtde, media, maior, menor = 0;
string resp;

int main(){
	cout << "**** Inicio do programa ****" << endl;
	cout << "============================" << endl;
	cout << endl;
	resp = "S";
	while (resp == "S"){
		cout << "Informe um número: ";
		cin >> n;
		soma += n;
		qtde += 1;
		if (qtde == 1)
			maior = menor = n;
		else {
			if (n > maior)
				maior = n;
			if (n < menor)
				menor = n;
		}
		cout << "Deseja continuar ? [S/N]";
		cin >> resp;
		resp = toupper(resp[0]);
	}
	media = soma / qtde;
	cout << "\nVoce informou " << qtde << " números e a média foi de " << media << endl;
	cout << "O maior número informado foi "<< maior << " e o menor " << menor << endl;
	cout << "\n============================" << endl;
	cout << "**** Fim do programa ****" << endl;
}
