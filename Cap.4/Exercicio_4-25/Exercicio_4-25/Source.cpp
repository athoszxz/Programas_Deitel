#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
	int row;
	int column, max;

	cout << "Digite a quantidade: " << endl;
	cin >> row;
	max = row;

	while (row >= 1)
	{
		column = 1;

		while (column <= max)
		{
			cout << (row % 2 ? "*" : "*"); //n�o tem endl, ent�o continua na mesma linha
			column++;
		}
		row--;
		cout << endl; //endl pra ir pra pr�xima linha
	}
	return 0;
}