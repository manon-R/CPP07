#include "iter.hpp"


using std::cout;
using std::endl;

int main(void){
	int itab[] = {0, 1, 2, 3};

	cout << "Int tab before calling iter template function" << endl;
	for (int i = 0; i < 4; i++){
		cout << "itab[" << i << "] = " << itab[i] << endl;
	}
	cout << endl;
	::iter(itab, 4, ::test);

	cout << "Int tab after calling iter template function" << endl;
    for (int i = 0; i < 4; i++){
        cout << "itab[" << i << "] = " << itab[i] << endl;
    }

	cout << endl;

	char ctab[] = {'g', 'd', 'k', 'k', 'n'};
	cout << "char tab before calling iter template function" << endl;
	for (int i = 0; i < 5; i++){
		cout << "ctab[" << i << "] = " << ctab[i] << endl;
	}
	cout << endl;
	::iter(ctab, 5, ::test);
	cout << "char tab after calling iter template function" << endl;
	for (int i = 0; i < 5; i++){
		cout << "ctab[" << i << "] = " << ctab[i] << endl;
	}

}