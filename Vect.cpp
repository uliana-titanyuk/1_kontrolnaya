#include "Func.h"
#include "CRat.h"
#include "Vect.h"
Vect Vect :: operator+(const Vect& b) {
	Vect m(size);
	for (int i = 0; i < size; i++) {
		m.arr[i] = arr[i] + b.arr[i];
	}
	return m;
};

Vect Vect :: operator-(const Vect& b) {
	Vect m(size);
	for (int i = 0; i < size; i++) {
		m.arr[i] = arr[i] - b.arr[i];
	}
	return m;
};

CRat Vect :: operator*(const Vect& b) {
	Vect m(size);
	CRat a;
	for (int i = 0; i < size; i++) {
		a = a + arr[i] * b.arr[i];
	}
	return a;
};

Vect& Vect :: operator=(const Vect& b) {
	for (int i = 0; i < size; i++) {
		arr[i] = b.arr[i];
	}
	return *this;
};

void Vect::print() {
	cout << "(";
	for (int i = 0; i < size - 1; i++) {
		arr[i].print();
		cout << " , ";
	}
	arr[size - 1].print();
	cout << ")\n";
};
