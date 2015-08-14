//Exercício 2.16 Programa que imprime a soma, produto, diferença e quociente de dois núemeros.
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main ()

{
	
	int x, y, soma, produto, quoc;
	
	cout << "Digite os dois numeros: ";
	cin >> x >> y;
	
	soma = x + y;
	produto = x * y;
	quoc = x / y;
	
	cout << "Soma: " << soma << "\nProduto: " << produto << "\nQuociente: " << quoc << endl;
	
	if (x == y)
		cout << "\n" << x << " eh igual a " << y << endl;
		
	if (x != y)
		cout << "\n" << x << " eh diferente de " << y << endl;
	
	if (x > y)
		cout << "\n" << x << " eh maior que " << y << endl;
	
	if (x < y)
		cout << "\n" << x << " eh menor que " << y << endl;
		
	if (x >= y)
		cout << x << " eh maior ou igual a " << y << endl;	
		
	if (x <= y)
		cout << x << " eh menor ou igual a " << y << endl;	
	
	return 0;
			 
}

