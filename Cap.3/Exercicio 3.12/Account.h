
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class Account
{
public:
	Account( int );
	void setCredit ( int ); //deve adicionar uma quantia ao saldo atual
	void setDebit ( int ); // deve retirar dinheiro e assegurar que não se retire mais do que tem na conta, se exceder mensagem
	void setBalance( int );
	int getBalance();
	int getCredit();
	int getDebit();
	
private:
	int saldo;
};
