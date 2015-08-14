#include <iostream>
using namespace std;

int main()
{
	double r, a, d, c;

	cout << "Digite o raio: " << endl;
	cin >> r;

	a = (r*r) * 3.14159;

	d = r * 2;

	c = ( 2 * r ) * 3.14159;

	cout << "Area: " << a << "\n\nDiametro: " << d << "\n\nCircunferencia: " << c << "\n\n" << endl;

	return 0;
}
