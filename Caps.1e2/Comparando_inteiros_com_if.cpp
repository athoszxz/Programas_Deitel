//Comparando inteiros utilizando instru��es if, operadores relacionais e de igualdade.

#include <iostream> //permite o programa realizar entrada e saida (cin e cout)

using std::cout; //using significa que o programa utiliza, com isso n�o precisa ficar escrevendo std:: toda hora.
using std::cin;
using std::endl; //endl gera nova linha e esvazia o buffer, for�ando a apresentar no "cout" fun��es que usem "cin". 

//a fun��o main significa que o programa inicia a execu��o daqui.
int main()
{
	int number1;
	int number2;
	
	cout << "Enter two integers to compare: "; //imprime na tela solicitando dados do usu�rio
	cin >> number1 >> number2; //l� dois inteiros fornecidos pelo usu�rio
	
	if ( number1 == number2 )
		cout << number1 << " == " << number2 << endl;
		
	if ( number1 != number2 )
		cout << number1 << " != " << number2 << endl;
		
	if ( number1 < number2 )
		cout << number1 << " < " << number2 << endl;
		
	if ( number1 > number2 )
		cout << number1 << " > " << number2 << endl;
		
	if ( number1 <= number2 )
		cout << number1 << " <= " << number2 << endl;
		
	if ( number1 >= number2 )
		cout << number1 << " >= " << number2 << endl;
		
	return 0;

}
