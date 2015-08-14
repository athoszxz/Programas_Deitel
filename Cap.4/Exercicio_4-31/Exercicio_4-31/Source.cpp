#include <iostream>
using namespace std;

int main()
{
	double a=1, b=1, c=1, ab, ac, bc;

	while (a && b && c != 0)
	{
		cout << "Digite: " << endl;
		cin >> a;
		cout << "Digite: " << endl;
		cin >> b;
		cout << "Digite: " << endl;
		cin >> c;

		ab = a - b;
		ac = a - c;
		bc = b - c;

		if (a && b && c != 0)
		{
			if (ab < c && ac < b && bc < a)
			{
				cout << "Eh um triangulo" << endl;
			}
			else
			{
				cout << "Nao eh um triangulo" << endl;
			}
		}
		else
		{
			cout << "Nao pode zero, ai ai ai" << endl;
		}
	}
	return 0;
}