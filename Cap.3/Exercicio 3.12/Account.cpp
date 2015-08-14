
#include <iostream>
using std::cout;
using std::endl;

#include "Account.h"

Account::Account( int number )
{
	setBalance( number );
}

void Account::setBalance( int saldo_atual )
{
	saldo = saldo_atual;
}

int Account::getBalance()
{
	return saldo;
}

void Account::setCredit( int credit )
{
	saldo = saldo + credit; 
}

int Account::getCredit()
{
	return saldo;
}

void Account::setDebit( int debit )
{
	if ( debit <= saldo )
	{
		saldo = saldo - debit;	
	}	
	
	if ( debit > saldo )
	{
		cout << "Valor maior que o saldo Disponivel." << endl;
	}
}

int Account::getDebit()
{
	return saldo;
}
