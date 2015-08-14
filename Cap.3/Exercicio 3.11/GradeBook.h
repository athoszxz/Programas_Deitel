// Fig. 3.11: GradeBook.h
// GradeBook class definition. This file presents GradeBook's public 
// interface without revealing the implementations of GradeBook's member
// functions, which are defined in GradeBook.cpp.
#include <string> // class GradeBook uses C++ standard string class
using std::string;

// GradeBook class definition
class GradeBook //com protótipos de função (linhas 12-15) que descrevem a interface public da classe sem revelar as implementações
{
public://cada protótipo de função deve terminar com (;) ponto e vírgula
   GradeBook( string, string ); //Construtor requer um parâmetro string e não retorna valor (nem mesmo void) ele inicializa courseName
   
   void setCourseName( string ); //função-membro que configura o nome do curso
   string getCourseName(); //função-membro que obtém o nome do curso
   
   void setInstrutorName( string );//exercício 3.11
   string getInstrutorName();//exercício 3.11
   
   void displayMessage(); //função membro que exibe a mensagem quando chamada.
   
private:
   string courseName; //course name for this GradeBook
   string instrutorName; //exercício 3.11 incluir um segundo membro de dados que representa o nome do instrutor
}; // end class GradeBook  
