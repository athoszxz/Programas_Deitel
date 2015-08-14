//Calcular módulo.
#include <iostream>

int main ()
{
	int x, y, z;
	
	std::cout << "digite: ";
	std::cin >> x >> y;
	
	z = x % y;
	
	std::cout << "Resultado: " << z << std::endl;
	
	return 0;
}
