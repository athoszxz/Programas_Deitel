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
			cout << (linha % 2 ? "* " : " *"); //n�o tem endl, ent�o continua na mesma linha
			column++;
		}
		linha--;
		cout << endl; //endl pra ir pra pr�xima linha
	}
	return 0;
}