#include <iostream>
using namespace std;

int main(){
   unsigned short int limite, aux, n1=0, n2=1;
   cout << "\nQuantos numeros Fibonacci deseja gerar? ";
   cin >> limite;
   cout << "\n" << n1 << " => ";
   while (limite > 0)
   {
      cout << n2 << " => ";
      aux = n2;
      n2 += n1;
      n1 = aux;
      limite--;
   }
   cout << "Fim da sequencia...\n\n";
}
