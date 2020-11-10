
#include "CRat.h"
#include "Vect.h"
Vect input() {
	CRat arr[LENGTH];
	int num, den;
	for (int i = 0; i < LENGTH; i++) {
		cout << "Vvedite " << i + 1 << "-yu drob (paru chisel)\t";
		cin >> num;
		cin >> den;
		CRat m(num, den);
		arr[i] = m;

	}
	Vect vect(arr);
	cout << "Vy vveli vector";
	vect.print();
	cout << endl;
return vect;
};
