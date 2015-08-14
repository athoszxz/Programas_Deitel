#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int counter=1, x=1, y=10, z=100, h=1000;

	cout << "N\t10*N\t100*N\t100*N\n" << endl;
	while (counter <= 5)
	{
		cout << x << "\t" << y << "\t" << z << "\t" << h << endl;
		
		x++;
		y += 10;
		z += 100;
		h += 1000;
		counter++;
	}
	return 0;
}