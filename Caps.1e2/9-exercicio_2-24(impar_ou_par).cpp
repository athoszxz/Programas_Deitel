//Programa que l� um inteiro e determina se ele � �mpar ou par.
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main ()
{
	int x, y;
	
	cout << "Digite um numero: ";
	cin >> x;
	
	y = x % 2;
	
	if (y == 0)
		cout << "O numero eh par";
		
	if (y != 0)
		cout << "O numero eh impar";
		
	return 0;
}
