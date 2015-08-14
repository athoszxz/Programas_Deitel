#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int counter = 1, maior = 0, un;

	while (counter <= 10)
	{
		cout << "Insira a quantidade de unidades vendidas: " << endl;
		cin >> un;

		if (un > maior)
		{
			maior = un;
		}
		counter++;
	}
	cout << "\nA maior quantidade de unidades vendidas eh de: " << maior << endl;
	return 0;
}