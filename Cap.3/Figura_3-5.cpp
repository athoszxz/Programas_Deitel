//Figura 3.5 (Nesse Programa a função-membro displayMessage obtem os dados (o nome do curso) de outra função da mesma classe)
//Define a classe GradeBook que agora contém um membro de dados courseName
//e funções-membro para configurar e obter seu valor;
//Cria e manipula um objeto Gradebook com essas funções.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string> //o programa utiliza classe de string padrão C++
using std::string;
using std::getline;

//definição da classe GradeBook
class GradeBook
{
public:

	void setCourseName( string name )//função que configura o nome do curso
	{
		courseName = name; // armazena o nome do curso no objeto
	}//fim da função setCourseName
	
	
	string getCourseName()//função que obtém o nome do curso
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
	string nameOfCourse; //declara o Argumento como um strings de caracteres para armazenar o nome do curso
	GradeBook myGradeBook; //cria um objeto GradeBook chamado myGradeBook
	
	//exibe valor inicial de courseName
	cout << "Initial course name is: " << myGradeBook.getCourseName() << endl;
	
	
	//solicita, insere e configura o nome do curso
	cout << "\nPlease enter the course name: " << endl;
	getline( cin, nameOfCourse ); //lê o nome do curso digitado e armazena no Argumento nameOfCourse
	myGradeBook.setCourseName( nameOfCourse ); //fornece nameOfCourse como Argumento para o Parâmetro do setCourseName (name)
	//o argumento nameOfCourse vai pro parâmetro do construtor-padrão (invisivel) do C++, pois nesse programa nenhum foi criado 
	//e depois vai parâmetro pro setCourseName
	
	cout << endl; //gera saída de uma linha em branco
	myGradeBook.displayMessage(); //exibe a mensagem com o novo nome do curso
	return 0; //indica terminação bem-sucedida
}// fim de main 

