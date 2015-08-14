//Figura 3.1 Deitel
//Define a clase Gradebook com uma fun��o-membro denominada displayMessage
//Cria um objeto denominado GradeBook e chama sua fun��o displayMessage.
#include <iostream>
using std::cout;
using std::endl;

class GradeBook //Define a classe ou tipo GradeBook
{
public://indica que a(s) fun��o abaixo est� 'dispon�vel ao p�blico', ou seja, pode ser chamada por outras fun��es ou fun��es-membros
	
	void displayMessage()//fun��o que exibe a mensagem de boas-vindas ao usu�rio do GradeBook
	
	//void � um tipo de retorno da fun��o, esse tipo indica que suas fun��es-membros n�o retornar�o dados
	//para a fun��o chamadora(nesse caso a int main)
	{
		cout << "Welcome to the Grade Book!" << endl;
	} //fim da fun��o displayMessage
}; //fim da classe GradeBook

int main() //a fun��o main inicia a execu��o do programa
{
	GradeBook myGradeBook; //cria um objeto GradeBook chamado myGradeBook
	myGradeBook.displayMessage(); //chama a fun��o displayMessage do objeto
	return 0; 
}

//int � um Tipo fundamental (o compilador sabe o que � int)
//GradeBook � um Tipo definido pelo usu�rio (voc� precisa descrever o que ele �, como nas linhas 9-19)
//ou seja, a classe � um Tipo que pode se tornar objeto, pois tipos fundamentais n�o podem.
