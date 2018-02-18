/*
 * AnalCadCli.cpp
 *
 *  Created on: 17 de fev de 2018
 *      Author: kryptonian
 *
 *  Este código se baseia no exercicio 56 do curso de Python3 e tem por objetivo:
 *  Ler as informações repassadas, pelo usuário, de nome, idade e sexo de um grupo de pessoas
 *  De posse dessas informações, a aplicação deverá informar:
 *
 *  a) a média de idade do grupo
 *  b) qual o nome do homem mais velho
 *  c) qtas mulheres tem menos de 20 anos
 *
 */

#include <iostream>

using namespace std;

string nome, nomevelho;
char sexo;
int idade, cnt, qtde, somaid, mediaid, homemaisv, totM20;

int main(){

	cout << "----------------------------------" << endl;
	cout << "Qtas pessoas serão cadastradas ?  ";
	cin >> qtde;
	for (int c = 1; c <= qtde; c++){

		cout << "------------------------" << endl;
		cout << "Informe o nome: ";
		cin >> nome;
		cout << "Informe o sexo [M/F]: ";
		cin >> sexo;
		cout << "Informe a idade [anos]: ";
		cin >> idade;

		somaid += idade;

		if (c == 1){
			if (sexo == 'm') {
				homemaisv = idade;
				nomevelho = nome;
			}
		}
		if (idade > homemaisv){
			if (sexo == 'm') {
				homemaisv = idade;
				nomevelho = nome;
			}
		}
		if (sexo == 'f'){
			if (idade < 20){
				totM20 += 1;
			}
		}
	}
	mediaid = somaid / 4;
	cout << "\n----------------------------------------" << endl;
	cout << "A média de idade do grupo é de " << mediaid << " anos." << endl;
	cout << "\nO homem mais velho (" << nomevelho << ") tem " << homemaisv << " anos." << endl;
	cout << "\nE temos " << totM20 << " mulher(es) com menos de 20 anos." << endl;
}
