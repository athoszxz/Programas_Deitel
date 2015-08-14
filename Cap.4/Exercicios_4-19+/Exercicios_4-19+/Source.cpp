#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int counter = 1, maior = 0, smaior, num;

	while (counter <= 10)
	{
		cout << "Digite o numero: " << endl;
		cin >> num;

		if (num > maior)
		{
			smaior = maior;
		}

		if (num > maior)
		{
			maior = num;
		}
		counter++;
	}

	cout << "O maior numero eh: " << maior << "\n\nO segundo maior numero eh: " << smaior << endl;
	return 0;
}