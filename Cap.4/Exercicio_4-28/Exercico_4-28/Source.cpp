#include <iostream>
using namespace std;

int main()
{
	int linha;
	int column, max;

	cout << "Digite a quantidade: " << endl;
	cin >> linha;
	max = linha;

	while (linha >= 1)
	{
		column = 1;

		while (column <= max)
		{
			cout << (linha % 2 ? "* " : " *"); //não tem endl, então continua na mesma linha
			column++;
		}
		linha--;
		cout << endl; //endl pra ir pra próxima linha
	}
	return 0;
}