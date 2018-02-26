/*
 * While_Struct01.cpp
 *
 *  Created on: 26 de fev de 2018
 *      Author: kryptonian
 */

#include <iostream>
#include <stdlib.h>

/*====================================
*           eXcript.com
*          fb.com/eXcript
* ====================================*/

using namespace std;

int main() {

    //Imprimindo os números de 0 até 99
    int num = 0;
    while(num <= 100){
        cout << num << " ";
        num++;
        if (num % 10 == 0){
        	cout << endl;
        }
    }

    cout << "\n\n";

    //Imprimindo os números de 99 até 0
    int num2 = 100;
    while(num2 >= 0){
        cout << num2 << " ";
        num2--;
        if (num2 % 10 == 0){
        	cout << endl;
        }
    }

    // system("pause");
    return 0;
}
