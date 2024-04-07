#include "Array.hpp"
#include <iostream>

using std::cout;
using std::cerr;
using std::endl;

// Macros pour les couleurs
# define RESET   "\033[0m"
# define RED     "\033[31m"
# define CYAN    "\033[1;36m"

int main()
{
	Array<int>	a(4);
	Array<int>	b; // Empty array

    b = a;
    cout << CYAN << "*********** Create two arrays and do a = b ***********\n" << RESET << endl;
	for (size_t i = 0; i < a.size(); i += 1) {
		cout << "a[" << i << "] = " << a[i] << "\n";
	}
	cout << endl;
	for (size_t i = 0; i < b.size(); i += 1) {
		cout << "b[" << i << "] = " << b[i] << "\n";
	}
	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
    a[3] = 4;
	cout << endl;
	cout << CYAN << "*********** After modifying a's content (no impact on b) ***********\n" << RESET << endl;
	for (size_t i = 0; i < a.size(); i += 1) {
		cout << "a[" << i << "] = " << a[i] << "\n";
	}
	cout << endl;
	for (size_t i = 0; i < b.size(); i += 1) {
		cout << "b[" << i << "] = " << b[i] << "\n";
	}
    cout << endl;
	cout << CYAN << "*********** Test invalid index exception ***********\n" << RESET << endl;
	// Test out of bound
    try {
        cout << a[a.size() + 1] << endl;
    }
    catch (std::exception& e) {
        cerr << RED << e.what() << RESET << endl;
    }
    cout << endl;

	return 0;
}