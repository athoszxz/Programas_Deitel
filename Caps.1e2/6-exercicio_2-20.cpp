//Exerc�cio 2.20 - Programa que imprime o di�metro, circunfer�ncia e �rea a partir do raio digitado.
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main ()
{
	int raio, D, C, A;
	
	cout << "Digite o raio: ";
	cin >> raio;
	
	D = 2 * raio;
	
	C = 3 * D;
	
	A = (raio * raio) * 3;
	
	cout << "O diametro eh: " << D << "\nA circinferencia eh: " << C << "\nA area eh: " << A << endl;
	
	return 0;
	
}
