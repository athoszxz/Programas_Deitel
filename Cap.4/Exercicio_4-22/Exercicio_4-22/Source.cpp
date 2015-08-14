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
			cout << (row % 2 ? "<" : ">"); //não tem endl, então continua na mesma linha
			column++;
		}
		row--;
		cout << endl; //endl pra ir pra próxima linha
	}
	return 0;
}