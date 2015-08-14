#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
	double hora, valor, sal, acresc, salex;

	cout << "Insira as horas trabalhadas: " << endl;
	cin >> hora;

	if (hora != -1)
	{
		cout << "Insira o valor das horas trabalhadas: " << endl;
		cin >> valor;
		
		if (hora <= 40)
		{
			sal = hora * valor;
			cout << "Salario:" << sal << endl;
		}
		else
		{
			sal = hora * valor;
			acresc = (((hora - 40) * valor) * 0.50);
			salex = sal + acresc;
			cout << "Salario: " << salex << endl;
			
		}
	}

	while (hora != -1)
	{
		cout << "Insira as horas trabalhadas: " << endl;
		cin >> hora;
		
		if (hora != -1)
		{
			cout << "Insira o valor das horas trabalhadas: " << endl;
			cin >> valor;

			if (hora <= 40)
			{
				sal = hora * valor;
				cout << "Salario:" << sal << endl;
			}
			else
			{
				sal = hora * valor;
				acresc = (((hora - 40) * valor) * 0.50);
				salex = sal + acresc;
				cout << "Salario: " << salex << endl;
			}
		}
	}
	return 0;
}