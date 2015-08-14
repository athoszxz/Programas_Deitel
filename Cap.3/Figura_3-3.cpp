// Figura 3.3: figo3_03.cpp
// Define a classe GradeBook com uma fun��o-membro que aceita um par�metro;
// Cria um objeto GradeBook e chama sua fun��o-membro displayMessage.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string> // o programa utiliza classe de string padr�o C++
using std::string;
using std::getline;

// defini��o da classe GradeBook
class GradeBook
{
public:
	// fun��o que exibe uma mensagem de boas-vindas ao usu�rio do GradeBook
	void displayMessage( string courseName ) //courseName � um par�metro do tipo String
	{
		cout << "Welcome to the grade book for\n" << courseName << "!" << endl;
	} // fim da fun��o displayMessage
}; // fim da classe GradeBook



int main() // a fun��o main inicia a execu��o do programa
{
	string nameOfCourse; // strings de caracteres para armazenar o nome do curso
	GradeBook myGradeBook; // cria um objeto GradeBook chamado myGradeBook

	// prompt para entrada do nome do curso
	cout << "P1ease enter the course name:" << endl;
	getline( cin, nameOfCourse ); // l� o nome de um curso com espa�os em branco
	cout << endl; // gera sa�da de uma linha em branco


	
	// chama a fun��o displayMessage de myGradeBook e passa nameOfCourse como um argumento
	myGradeBook.displayMessage( nameOfCourse ); // Isso � denominado chamada de fun��o que leva
	return 0; // indica termina��o bem-sucedida
}	// fim de main
