#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
	int count = 1;

	while (count <= 10)
	{
		cout << (count % 2 ? "****" : "++++++++") << endl;
		count++;
	}
	return 0;
}