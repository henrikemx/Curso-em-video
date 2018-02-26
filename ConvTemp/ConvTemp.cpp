/*
 * ConvTemp.cpp
 *
 *  Created on: 25 de fev de 2018
 *      Author: kryptonian
 *
 *  Este c�digo é baseado no exercicio da Aula 14 do curso de Python3, Mundo 1
 *
 *  Conversor de Temperatura
 *
 */

#include <iostream>
#include <clocale>

using namespace std;

int main(){

	setlocale(LC_ALL, "");
	double c_k, k_c, f_c, c_f, f_k, k_f, f, c, k;
	int opcao;
	string r = "s";
	cout << "\n==== Conversor de Temperatura ====" << endl;

	do {
		system("cls");
		cout << "\n";
		cout << "***************************" << endl;
		cout << "Escolha o tipo de conversão" << endl;
		cout << "***************************" << endl;
		cout << "[1] de °C para °F e °K" << endl;
		cout << "[2] de °F para °C e °K" << endl;
		cout << "[3] de °K para °F e °C" << endl;
		cout << "***************************" << endl;
		cout << "Informe a opção: ";
		cin >> opcao;

		c_f = (1.8 * c) + 32;
		c_k = c + 273;

		f_c = (f - 32) / 1.8;
		f_k = c_f + 273;

		k_c = k - 273;
		k_f = (1.8 * k_c) + 32;

		switch (opcao){
			case 1:
				cout << "Informe a temperatura: ";
				cin >> c;
				c_f = 1.8 * c + 32;
				c_k = c + 273;
				cout << "\n" << c << " °C corresponde a " << c_f << " °F e a " << c_k << " °K !!!";
				// cout << "\n" << c << " °C corresponde a " << c_k << " °K !!!";
				break;
			case 2:
				cout << "Informe a temperatura: ";
				cin >> f;
				f_c = (f - 32) / 1.8;
				f_k = c_f + 273;
				cout << "\n" << f << " °F corresponde a " << f_c << " °C e a " << f_k << " °K !!!";
				// cout << "\n" << f << " °F corresponde a " << f_k << " °K !!!";
				break;
			case 3:
				cout << "Informe a temperatura: ";
				cin >> k;
				k_f = 1.8 * c_f + 32;
				k_c = k - 273;
				cout << "\n" << k << " °K corresponde a " << k_c << " °C e a " << k_f << " °F !!!";
				// cout << "\n" << k << " °K corresponde a " << k_f << " °F !!!";
				break;
			default:
				cout << "Opção INVÁLIDA !!" << endl;
				break;
		}
		cout << endl;
		cout << "\n==== Deseja continuar ? ====" << endl;
		cout << "\nResposta: [S/N] ";
		cin >> r;
	} while ((r == "s") or (r ==  "S"));
	cout << endl;
	cout << "\n**** Para encerrar o Programa..." << endl;
	system("pause");
	cout << "\n\n";
	return 0;
}
