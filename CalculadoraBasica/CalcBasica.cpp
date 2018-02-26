/*
 * CalcBasica.cpp
 *
 *  Created on: 25 de fev de 2018
 *      Author: kryptonian
 */

#include <iostream>
#include <cstdlib>
using namespace std;

int main (void){

    int a, b, c, operacao;

    cout << "\nInforme os valores..." << "\n";
    cout << "\nDigite o 1o valor: ";
    cin >> a;
    cin.ignore();
    cout << "Digite o 2o valor: ";
    cin >> b;
    cin.ignore();
    cout << "\nQue operacao deseja realizar?\n\n1.Adicao\n2.Subtracao\n3.Multiplicacao\n4.Divisao\n\n=> ";
    cin >> operacao;
    cin.ignore();
    system ("cls");
    //cout << setlocale(LC_ALL, "");
    cout << "\nO valor da operação é " ;
    switch (operacao) {
        case 1:
            c = a + b;
            cout << a << " + " << b << " = " << c << "\n\n";
            break;
        case 2:
            c = a - b;
            cout << a << " - " << b << " = " << c << "\n\n";
            break;
        case 3:
            c = a * b;
            cout << a << " * " << b << " = " << c << "\n\n";
            break;
        case 4:
            c = a / b;
            cout << a << " / " << b << " = " << c << "\n\n";
            break;
    }
    system ("pause");
    return 0;
}
