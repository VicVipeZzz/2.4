#include "Vector.h"
#include <iostream>

using namespace std;

int main()
{
	Vector a(2);
	Vector b(2);
	Vector c;
	cin >> a >> b;

	c = add(a, b);
	cout << c << endl;
	cout << a.norm() << endl;
	cout << b.norm() << endl;

	if (equ(a, b))
		cout << "True";
	else
		cout << "False";

	return 0;
}
