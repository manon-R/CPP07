#include "whatever.hpp"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

int main( void ) {

	cout << "******** Tests with int a = 2 and b = 3 ********" << endl;
	int a = 2;
	int b = 3;
	::swap(a, b);
	cout << "a = " << a << ", b = " << b << endl;
	cout << "min(a, b) = " << ::min(a, b) << endl;
	cout << "max(a, b) = " << ::max(a, b) << endl;

	cout << "\n******** Tests with string c = chaine1 and d = chaine2 ********" << endl;

	string c = "chaine1";
	string d = "chaine2";
	::swap(c,d);
	cout << "c = " << c << ", d = " << d << endl;
	cout << "min(c, d) = " << ::min(c, d) << endl;
	cout << "max(c, d) = " << ::max(c, d) << endl;
	return 0;
}
