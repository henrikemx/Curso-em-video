/*
 * Do_While_Struc.cpp
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

    int i = 10;
    cout << "\nLooping DO-WHILE\n\n";
    do{
        i++;
        cout << "O valor da variavel i eh: " << i << endl;
    } while(i>=10 && i<=20);

    cout << "\n\nLooping WHILE\n\n";
    int i2 = 10;
    while(i2>=10 && i2<=20){
        i2++;
        cout << "O valor da variavel i2 eh: " << i2 << endl;
    }

    // system("pause");
    return 0;
}
