//Figura 3.7 
//Define a classe GradeBook que agora contém um membro de dados courseName
//e funções-membro para configurar e obter seu valor;
//Cria e manipula um objeto Gradebook com essas funções.
#include <iostream>
using std::cout;
using std::endl;

#include <string> //o programa utiliza classe de string padrão C++
using std::string;

//definição da classe GradeBook
class GradeBook
{
public:
	//o construtor inicializa courseName com a string fornecida como argumento
	GradeBook( string name ) // o parâmetro name poderia ter outro nome ou o mesmo, pois parâmetros são locais a cada função 
	{//este construtor poderia realizar a atribuição coursename = name; mas ao invés disso passa essa função para setCourseName
		setCourseName( name ); // chama a função set para inicializar courseName
	}//fim do construtor GradeBook
	
	//função para vonfigurar o nome do curso
	void setCourseName( string name )
	{
		courseName = name; // armazena o nome do curso no objeto
	}//fim da função setCourseName
	
	//função que obtém o nome do curso
	string getCourseName()
	{
		return courseName; //retorna o courseName do objeto
	}//fim da função getCourseName
	
	
	void displayMessage()
	{
		//essa instrução chama getCourseName para obter o nome do curso para seu parâmetro
		//ao invés de direto do Argumento (nameOfCourse) criado na função main().
		cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
	}//fim da função displayMessage
private:
	string courseName; //declaração do membro de dados que será utilizado pelas funções-membro no lugar do Argumento (nameOfCourse)	
};

//a função main inicia a execução do programa
int main()
{
	//cria dois objetos Gradebook já com valores iniciais
	GradeBook gradeBook1 ( "CS101 Introduction to C++ Programming" );//o construtor GradeBook é chamado implicitamente pelo C++
	GradeBook gradeBook2 ( "CS102 Data Structures in c++" );//e copia argumetos entre parenteses para seu parâmetro e depois envia para set
	
	//exibe valor inicial de courseName para cada GradeBook
	cout << "gradeBook1 created for course: " << gradeBook1.getCourseName() 
		<< "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
		<< endl; 
	return 0; //indica terminação bem-sucedida
}// fim de main 
