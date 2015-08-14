#include <iostream>
using std::endl;
using std::cout;

#include "Date.h"

//Date::Date( int mes, int dia, int ano )
//{
//	setMesDate( mes );
//	setDiaDate( dia );
//	setAnoDate(ano);
//}

//===========================================
void Date::setMesDate(int mes)
{
	if( mes <= 12)
	{
		mesDate = mes;
	}
	
	if (mes > 12)
	{
		mesDate = 1;
	}
}

int Date::getMesDate()
{
	return mesDate;
}

//===========================================
void Date::setDiaDate(int dia)
{
	diaDate = dia;
}

int Date::getDiaDate()
{
	return diaDate;
}

//===========================================
void Date::setAnoDate(int ano)
{
	anoDate = ano;
}

int Date::getAnoDate()
{
	return anoDate;
}

//===========================================
void Date::displayDate()
{
	cout << "Data: " << getDiaDate() << "/" << getMesDate() << "/" << getAnoDate() << endl;
}