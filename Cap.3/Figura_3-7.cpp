//Figura 3.7 
//Define a classe GradeBook que agora cont�m um membro de dados courseName
//e fun��es-membro para configurar e obter seu valor;
//Cria e manipula um objeto Gradebook com essas fun��es.
#include <iostream>
using std::cout;
using std::endl;

#include <string> //o programa utiliza classe de string padr�o C++
using std::string;

//defini��o da classe GradeBook
class GradeBook
{
public:
	//o construtor inicializa courseName com a string fornecida como argumento
	GradeBook( string name ) // o par�metro name poderia ter outro nome ou o mesmo, pois par�metros s�o locais a cada fun��o 
	{//este construtor poderia realizar a atribui��o coursename = name; mas ao inv�s disso passa essa fun��o para setCourseName
		setCourseName( name ); // chama a fun��o set para inicializar courseName
	}//fim do construtor GradeBook
	
	//fun��o para vonfigurar o nome do curso
	void setCourseName( string name )
	{
		courseName = name; // armazena o nome do curso no objeto
	}//fim da fun��o setCourseName
	
	//fun��o que obt�m o nome do curso
	string getCourseName()
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
	//cria dois objetos Gradebook j� com valores iniciais
	GradeBook gradeBook1 ( "CS101 Introduction to C++ Programming" );//o construtor GradeBook � chamado implicitamente pelo C++
	GradeBook gradeBook2 ( "CS102 Data Structures in c++" );//e copia argumetos entre parenteses para seu par�metro e depois envia para set
	
	//exibe valor inicial de courseName para cada GradeBook
	cout << "gradeBook1 created for course: " << gradeBook1.getCourseName() 
		<< "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
		<< endl; 
	return 0; //indica termina��o bem-sucedida
}// fim de main 
