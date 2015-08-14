
#include <iostream>
using std::cout;
using std::endl;

#include "Account.h"

int main()
{
	int x, y;
	Account account1( 100 );
	Account account2( 100 );
	
	cout << "O saldo inicial eh: " << account1.getBalance() << "\n\n Digite 1 para saldo, 2 para deposito e 3 para saque" << endl;
	cin >> x;
	
	if ( x == 1 )
	{
		cout << "O saldo eh: " << account1.getBalance() << endl;
	}
	
	if ( x == 2 )
	{
		cout << "Digite o valor a depositar: " << endl;
		cin >> y;
		account1.setCredit( y );
		
		cout << "Agora seu saldo eh: " << account1.getCredit() << "\n" << endl;
	}
	
	if ( x == 3 )
	{
		cout << "Digite o valor a sacar: " << endl;
		cin >> y;
		account2.setDebit( y );
		
		cout << "Agora seu saldo eh: " << account2.getDebit() << "\n" << endl;
	}
	return 0;
}
