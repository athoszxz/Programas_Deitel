//Figura 3.1 Deitel
//Define a clase Gradebook com uma função-membro denominada displayMessage
//Cria um objeto denominado GradeBook e chama sua função displayMessage.
#include <iostream>
using std::cout;
using std::endl;

class GradeBook //Define a classe ou tipo GradeBook
{
public://indica que a(s) função abaixo está 'disponível ao público', ou seja, pode ser chamada por outras funções ou funções-membros
	
	void displayMessage()//função que exibe a mensagem de boas-vindas ao usuário do GradeBook
	
	//void é um tipo de retorno da função, esse tipo indica que suas funções-membros não retornarão dados
	//para a função chamadora(nesse caso a int main)
	{
		cout << "Welcome to the Grade Book!" << endl;
	} //fim da função displayMessage
}; //fim da classe GradeBook

int main() //a função main inicia a execução do programa
{
	GradeBook myGradeBook; //cria um objeto GradeBook chamado myGradeBook
	myGradeBook.displayMessage(); //chama a função displayMessage do objeto
	return 0; 
}

//int é um Tipo fundamental (o compilador sabe o que é int)
//GradeBook é um Tipo definido pelo usuário (você precisa descrever o que ele é, como nas linhas 9-19)
//ou seja, a classe é um Tipo que pode se tornar objeto, pois tipos fundamentais não podem.
