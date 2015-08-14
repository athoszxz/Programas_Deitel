#include <iostream>
using namespace std;

int main()
{
	int dig, p, p1, pcript, s, s1, script, t, t1, tcript, q, q1, qcript;

	cout << "Digite 4 numeros" << endl;
	cin >> dig;

	p = dig / 1000;

	s = dig / 100;
	s1 = s % 10;


	t = dig / 10;
	t1 = t % 10;


	q = dig;
	q1 = q % 10;

	(p <= 7 ? pcript = (p + 10) - 7 : pcript = p - 7);
	(s1 <= 7 ? script = (s1 + 10) - 7 : script = s1 - 7);
	(t1 <= 7 ? tcript = (t1 + 10) - 7 : tcript = t1 - 7);
	(q1 <= 7 ? qcript = (q1 + 10) - 7 : qcript = q1 - 7);

	cout << "Criptografado: " << pcript << script << tcript << qcript << endl;
	
	return 0;
}