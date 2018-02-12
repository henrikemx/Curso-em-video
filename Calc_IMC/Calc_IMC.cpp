#include <iostream>

using namespace std;

int main(){

	cout << "==============================" << endl;
	cout << "      Caluladora de IMC       " << endl;
	cout << "==============================" << endl;

	float peso, altura, imc;

	cout << "Informe o peso [kg]: ";
	cin >> peso;
	cout << "Informe a altura [m,cm]: ";
	cin >> altura;

	imc = peso / (altura*altura);
	cout << "\nO IMC dessa pessoa é de " << imc << endl;

	if (imc < 18.5)
			cout << "\nEstá abaio do peso ideal !!" << endl;
	if (18.5 <= imc)
		if (imc < 25)
			cout << "\nEstá na faixa IDEAL. Parabéns !!" << endl;
	if (25 <= imc)
		if (imc < 30)
			cout << "\nEstá com SOBREPESO !!" << endl;
	if (30 <= imc)
		if (imc < 40)
			cout << "\nSofrendo de OBESIDADE !!" << endl;
	if (imc >= 40)
			cout << "\nSofrendo de OBESIDADE MÓRBIDA !! Cuidado !!" << endl;
}
