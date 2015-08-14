
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;
using std::getline;

#include "Invoice.h"

int main()
{
	int x, y;
	string id, desc;
	
	Invoice invoice1;
	Invoice invoice2;
	Invoice invoice3;
	
	cout << "Digite o numero identificador: " << endl;
	getline (cin, id );
	invoice1.setFaturaId( id );//tinha que mandar para invoice1.setFaturaId( id );
	
	cout << "Digite a descricao do item: " << endl;
	getline (cin, desc );
	invoice2.setProductDescription( desc );
	
	cout << "Digite a quantidade de itens: " << endl;
	cin >> x;
	invoice3.setProductQuant( x );
	
	cout << "Digite o preco da unidade: " << endl;
	cin >> y;
	invoice3.setProductPrice( y );
	

		
	cout << "\n\n=========FATURA=========\n\nIdentificador:" << invoice1.getFaturaId() << "\n\nDescricao: " << invoice2.getProductDescription()
		<< "\n\nQuantidade: " << invoice3.getProductQuant() << "\n\nPreco da unidade: " << invoice3.getProductPrice()
		<< "\n\nQuantia da fatura: " << invoice3.getInvoiceAmount() << endl;
	return 0;
}
