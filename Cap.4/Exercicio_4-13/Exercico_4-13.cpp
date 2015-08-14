#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	float km, litro, kmlitro, totalkmlitro, totalkm = 0, totallitro = 0;

	cout << "digite a quilometragem dirigida (ou sentinela): " << endl;
	cin >> km;

	if (km != -1)
	{
		cout << "digite a quantidade de litros de gasolina consumidos: " << endl;
		cin >> litro;
	}

	while (km != -1)
	{
		kmlitro = km / litro;
		totalkm += km;
		totallitro += litro;
		
		totalkmlitro = totalkm / totallitro;
		
		cout << "\nKm/litro deste tanque:" << kmlitro << "\nTotal Km/Litro: " << totalkmlitro << "\n\n" << endl;

		cout << "digite a quilometragem dirigida (ou sentinela): " << endl;
		cin >> km;

		cout << "digite a quantidade de litros de gasolina consumidos: " << endl;
		cin >> litro;	
	}
	return 0;
}
