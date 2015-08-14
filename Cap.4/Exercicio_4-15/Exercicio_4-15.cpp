#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	float sal=200, comiss, venda, total;
	
	while ( venda != -1 )
	{
		cout << "Digite o valor da venda (-1 para terminar): " << endl;
		cin >> venda;
		
		comiss = venda * 0.09;
		
		total = sal + comiss;
		
		cout << "\nSalario atualizado: " << total << "\n\n" << endl;
	}
	
	return 0;
}
