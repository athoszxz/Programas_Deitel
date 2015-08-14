//Programa que lê 5 inteiros e determina o maior e o menor.
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main ()
{
	int a, b, c, d, e, maior, menor;
	
	cout << "Digite cinco numeros: ";
	cin >> a >> b >> c >> d >> e;
	
	maior = 0;
	menor = 100000000;
	
	if (a > maior)
		maior = a;
	
	if (b > maior)
		maior = b;
		
	if (c > maior)
		maior = c;
		
	if (d > maior)
		maior = d;
		
	if (e > maior)
		maior = e;
		
	if (a < menor)
		menor = a;
		
	if (b < menor)
		menor = b;
		
	if (c < menor)
		menor = c;
	
	if (d < menor)
		menor = d;
		
	if (e < menor)
		menor = e;
		
	cout << "O maior numero eh: " << maior << endl;
	cout << "O menor numero eh: " << menor << endl;
	
	return 0;
	
}
