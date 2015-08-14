
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;
using std::getline;


#include "Employee.h"

int main()
{
	string nome, nome2, sobrenome, sobrenome2;
	int salario, salario2;
	double percentual1, percentual2, valor_final1, valor_final2;
	
	Employee employee1;
	Employee employee2;
	
	cout << "Digite o nome: " << endl;
	getline ( cin, nome );
	employee1.setName( nome );
	
	cout << "\nDigite o Sobrenome: " << endl;
	getline ( cin, sobrenome );
	employee1.setSobreNome( sobrenome );
	
	cout << "\nDigite o salario: " << endl;
	cin >> salario;
	employee1.setSalario( salario );
	
	cin.ignore(256, '\n');

	cout << "\nDigite o nome: " << endl;
	getline ( cin, nome2 );
	employee2.setName( nome2 );
	
	cout << "\nDigite o Sobrenome: " << endl;
	getline ( cin, sobrenome2 );
	employee2.setSobreNome( sobrenome2 );
	
	cout << "\nDigite o salario: " << endl;
	cin >> salario2;
	employee2.setSalario( salario2 );

	
  	percentual1 = 10.0 / 100.0; // 10%
  	valor_final1 = salario + (percentual1 * salario);
  	
  	percentual2 = 10.0 / 100.0; // 10%
  	valor_final2 = salario2 + (percentual2 * salario2);

	cout << "\n\nSalario Anual de " << employee1.getName() << " " << employee1.getSobreNome() << "\n\nRS " 
	<< employee1.getSalario() << "\n\nCom 10% de aumento fica: " << valor_final1 << "\n\n==========================================="
	<< "\n\nSalario Anual de " 
	<< employee2.getName() 	<< " " << employee2.getSobreNome() << "\n\nRS " << employee2.getSalario() 
	<< "\n\nCom 10% de aumento fica: " << valor_final2 << endl;
	
	
	
		
//	<< "\n\n===================\nSalario Anual de " << employee2.getName() << 	employee2.getSobreNome() << "\n\nRS "
//		<< employee2.getSalario
	
//	y = employee1.getSalario() * 0.10;
//	y = employee2.getSalario() * 0.10;
//	employee1.getSalario = employee1.getSalario + y;
//	employee2.getSalario = employee2.getSalario + y;
	
//	cout << "Salario Anual de " << employee1.getName() << 	employee1.getSobreNome() << "\n\nAgora eh RS " << employee1.setSalario
//		<< "\n\n===================\nSalario Anual de " << employee2.getName() << 	employee2.getSobreNome() << "\n\nAgora eh RS "
//		<< employee2.setSalario << endl;
		
	return 0;
}
