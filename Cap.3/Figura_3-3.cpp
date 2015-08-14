// Figura 3.3: figo3_03.cpp
// Define a classe GradeBook com uma função-membro que aceita um parâmetro;
// Cria um objeto GradeBook e chama sua funçâo-membro displayMessage.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string> // o programa utiliza classe de string padrâo C++
using std::string;
using std::getline;

// definiçào da classe GradeBook
class GradeBook
{
public:
	// função que exibe uma mensagem de boas-vindas ao usuário do GradeBook
	void displayMessage( string courseName ) //courseName é um parâmetro do tipo String
	{
		cout << "Welcome to the grade book for\n" << courseName << "!" << endl;
	} // fim da função displayMessage
}; // fim da classe GradeBook



int main() // a função main inicia a execução do programa
{
	string nameOfCourse; // strings de caracteres para armazenar o nome do curso
	GradeBook myGradeBook; // cria um objeto GradeBook chamado myGradeBook

	// prompt para entrada do nome do curso
	cout << "P1ease enter the course name:" << endl;
	getline( cin, nameOfCourse ); // lê o nome de um curso com espaços em branco
	cout << endl; // gera saída de uma linha em branco


	
	// chama a função displayMessage de myGradeBook e passa nameOfCourse como um argumento
	myGradeBook.displayMessage( nameOfCourse ); // Isso é denominado chamada de função que leva
	return 0; // indica terminação bem-sucedida
}	// fim de main
