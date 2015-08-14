// Fig. 3.11: GradeBook.h
// GradeBook class definition. This file presents GradeBook's public 
// interface without revealing the implementations of GradeBook's member
// functions, which are defined in GradeBook.cpp.
#include <string> // class GradeBook uses C++ standard string class
using std::string;

// GradeBook class definition
class GradeBook //com prot�tipos de fun��o (linhas 12-15) que descrevem a interface public da classe sem revelar as implementa��es
{
public://cada prot�tipo de fun��o deve terminar com (;) ponto e v�rgula
   GradeBook( string, string ); //Construtor requer um par�metro string e n�o retorna valor (nem mesmo void) ele inicializa courseName
   
   void setCourseName( string ); //fun��o-membro que configura o nome do curso
   string getCourseName(); //fun��o-membro que obt�m o nome do curso
   
   void setInstrutorName( string );//exerc�cio 3.11
   string getInstrutorName();//exerc�cio 3.11
   
   void displayMessage(); //fun��o membro que exibe a mensagem quando chamada.
   
private:
   string courseName; //course name for this GradeBook
   string instrutorName; //exerc�cio 3.11 incluir um segundo membro de dados que representa o nome do instrutor
}; // end class GradeBook  
