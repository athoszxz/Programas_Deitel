//Figura 3.5 (Nesse Programa a fun��o-membro displayMessage obtem os dados (o nome do curso) de outra fun��o da mesma classe)
//Define a classe GradeBook que agora cont�m um membro de dados courseName
//e fun��es-membro para configurar e obter seu valor;
//Cria e manipula um objeto Gradebook com essas fun��es.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string> //o programa utiliza classe de string padr�o C++
using std::string;
using std::getline;

//defini��o da classe GradeBook
class GradeBook
{
public:

	void setCourseName( string name )//fun��o que configura o nome do curso
	{
		courseName = name; // armazena o nome do curso no objeto
	}//fim da fun��o setCourseName
	
	
	string getCourseName()//fun��o que obt�m o nome do curso
	{
		return courseName; //retorna o courseName do objeto
	}//fim da fun��o getCourseName
	
	
	void displayMessage()
	{
		//essa instru��o chama getCourseName para obter o nome do curso para seu par�metro
		//ao inv�s de direto do Argumento (nameOfCourse) criado na fun��o main().
		cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
		
	}//fim da fun��o displayMessage
private:
	string courseName; //declara��o do membro de dados que ser� utilizado pelas fun��es-membro no lugar do Argumento (nameOfCourse)	
};

//a fun��o main inicia a execu��o do programa
int main()
{
	string nameOfCourse; //declara o Argumento como um strings de caracteres para armazenar o nome do curso
	GradeBook myGradeBook; //cria um objeto GradeBook chamado myGradeBook
	
	//exibe valor inicial de courseName
	cout << "Initial course name is: " << myGradeBook.getCourseName() << endl;
	
	
	//solicita, insere e configura o nome do curso
	cout << "\nPlease enter the course name: " << endl;
	getline( cin, nameOfCourse ); //l� o nome do curso digitado e armazena no Argumento nameOfCourse
	myGradeBook.setCourseName( nameOfCourse ); //fornece nameOfCourse como Argumento para o Par�metro do setCourseName (name)
	//o argumento nameOfCourse vai pro par�metro do construtor-padr�o (invisivel) do C++, pois nesse programa nenhum foi criado 
	//e depois vai par�metro pro setCourseName
	
	cout << endl; //gera sa�da de uma linha em branco
	myGradeBook.displayMessage(); //exibe a mensagem com o novo nome do curso
	return 0; //indica termina��o bem-sucedida
}// fim de main 

