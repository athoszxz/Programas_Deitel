
#include <iostream>


#include <string>
using std::string;
//using std::getline;

#include "Invoice.h"

	Invoice::Invoice (string Id, string Desc, int Quant, int Price )
	{
		setFaturaId( Id );
		setProductDescription( Desc );
		setProductQuant( Quant );
		setProductPrice( Price );
	}
	
	//=======================================================
	void Invoice::setFaturaId( string id )
	{
		faturaId = id; 
	}
	
	string Invoice::getFaturaId()
	{
		return faturaId;
	}
	
	//=======================================================
	void Invoice::setProductDescription( string desc )
	{
		productDescription = desc; 
	}
	
	string Invoice::getProductDescription()
	{
		return productDescription;
	}
	
	//=======================================================
	void Invoice::setProductQuant( int quant )
	{
		productQuant = quant; 
	}
	
	int Invoice::getProductQuant()
	{
		return productQuant;
	}
	
	//=======================================================
	void Invoice::setProductPrice( int price )
	{
		productPrice = price; 
	}
	
	int Invoice::getProductPrice()
	{
		return productPrice;
	}
	
	//=======================================================	
	int Invoice::getInvoiceAmount()
	{
		invoiceAmount = productQuant * productPrice;
		return invoiceAmount;
	}
