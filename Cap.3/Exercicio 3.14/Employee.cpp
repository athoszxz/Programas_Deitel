
#include <iostream>

#include <string>
using std::string;

#include "Employee.h"

//Employee::Employee (string names, string snames, int sal )
//{
//	setName ( names );
//	setSobreNome ( snames );
//	setSalario (sal);
//}

//===========================================================	
	void Employee::setName( string namess )
	{
		name = namess;
	}
	
	string Employee::getName()
	{
		return name;
	}
	
//===========================================================	
	void Employee::setSobreNome( string snames )
	{
		sobreNome = snames;
	}
	
	string Employee::getSobreNome()
	{
		return sobreNome;
	}
	
//===========================================================
	void Employee::setSalario( int sal )
	{
		if ( sal >= 0)
		{
			salario = sal;
		}
		if ( sal < 0 )
		{
			salario = 0;
		}
	}
	
	int Employee::getSalario()
	{
		return salario;
	}	
