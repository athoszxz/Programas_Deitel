//Comparando inteiros utilizando instruções if, operadores relacionais e de igualdade.

#include <iostream> //permite o programa realizar entrada e saida (cin e cout)

using std::cout; //using significa que o programa utiliza, com isso não precisa ficar escrevendo std:: toda hora.
using std::cin;
using std::endl; //endl gera nova linha e esvazia o buffer, forçando a apresentar no "cout" funções que usem "cin". 

//a função main significa que o programa inicia a execução daqui.
int main()
{
	int number1;
	int number2;
	
	cout << "Enter two integers to compare: "; //imprime na tela solicitando dados do usuário
	cin >> number1 >> number2; //lê dois inteiros fornecidos pelo usuário
	
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
