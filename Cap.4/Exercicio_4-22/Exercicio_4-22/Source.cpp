#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int row = 10;
	int column;

	while (row >= 1)
	{
		column = 1;

		while (column <= 10)
		{
			cout << (row % 2 ? "<" : ">"); //n�o tem endl, ent�o continua na mesma linha
			column++;
		}
		row--;
		cout << endl; //endl pra ir pra pr�xima linha
	}
	return 0;
}