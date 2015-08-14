
#include <iostream>

#include <string>
using std::string;

class Employee
{
	
public:
	//Employee( string, string, int );//construtor
	
	void setName( string );
	string getName();
	
	void setSobreNome( string );
	string getSobreNome();
	
	void setSalario( int );
	int getSalario();
	
private:
	string name;
	string sobreNome;
	int salario;
};
