/*
 * CalcMedia_Arrays.cpp
 *
 *  Created on: 26 de fev de 2018
 *      Author: kryptonian
 */

#include <iostream>

/*====================================
*           eXcript.com
*          fb.com/eXcript
* ====================================*/

using namespace std;

int main() {

    double val[5];
    //1) entrada de valores (5 números)
    for(int i = 0; i<=4; i++){
        cout << "Informe o " << i+1 << "° valor: ";
        cin >> val[i];
    }

    double total = 0;
    //2) calcular a média
    for(int i2 = 0; i2<=4; i2++){
//        total = total + val[i2];
        total += val[i2];
    }
    cout.precision(2);
    cout << fixed;
    cout << endl;
    cout << ">>> A media eh: " << (total / 5) << " <<<<" << endl;


    return 0;
}
