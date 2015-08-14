#include <iostream>
using std::endl;
using std::cin;
using std::cout;

#include "Date.h"

int main()
{
	int d, m, a;

	Date date1;
	
	cout << "Digite o dia: " << endl;
	cin >> d;
	date1.setDiaDate(d);

	cout << "Digite o mes: " << endl;
	cin >> m;
	date1.setMesDate(m);

	cout << "Digite o ano: " << endl;
	cin >> a;
	date1.setAnoDate(a);

	date1.displayDate();

	return 0;
}