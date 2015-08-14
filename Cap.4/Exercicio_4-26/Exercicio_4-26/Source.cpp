#include <iostream>
using namespace std;

int main()
{
	int dig, p, p1, s, s1, t, t1, q, q1, k, k1;

	cout << "Digite 5 numeros" << endl;
	cin >> dig;

	p = dig / 10000;


	s = dig / 1000;
	s1 = s % 10;


	t = dig / 100;
	t1 = t % 10;


	q = dig / 10;
	q1 = q % 10;


	k = dig;
	k1 = k % 10;

	if (p == k1 && s1 == q1)
	{
		cout << "Eh um palindromo" << endl;
	}
	else
	{
		cout << "Nao eh um palindromo" << endl;
	}
	return 0;
}