
#include <iostream>

#include <string>
using std::string;

class Invoice
{
public:
	Invoice( string, string, int, int );// construtor
	
	void setFaturaId( string );
	string getFaturaId();
	
	void setProductDescription( string );
	string getProductDescription();
	
	void setProductQuant( int );
	int getProductQuant();
	
	void setProductPrice( int );
	int getProductPrice();
	
	void setInvoiceAmount( int );
	int getInvoiceAmount();
	
	
private:
	string faturaId;
	string productDescription;
	int productQuant;
	int productPrice;
	int invoiceAmount;
};
