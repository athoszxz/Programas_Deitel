//Programa de Adi��o que exibe a soma de dois n�meros com apenas duas vari�veis.
#include <iostream>

int main()
{
	int number1;
	  
	std::cout << "Digite o primeiro inteiro: ";
	std::cin >> number1;
	
	int number2;
	
	std::cout << "Digite o segundo inteiro: ";
	std::cin >> number2;
	
	std::cout << "A soma eh " << number1 + number2 << std::endl;
	
	return 0;
}
