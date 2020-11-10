
#include "CRat.h"
#include "Vect.h"
Vect Vect :: operator+(const Vect& b) {
	Vect m;
	for (int i = 0; i < LENGTH; i++) {
		m.a[i] = a[i] + b.a[i];
	}
	return m;
};

Vect Vect :: operator-(const Vect& b) {
	Vect m;
	for (int i = 0; i < LENGTH; i++) {
		m.a[i] = a[i] - b.a[i];
	}
	return m;

CRat Vect :: operator*(const Vect& b) {
	Vect m;
	CRat b;
	for (int i = 0; i < LENGTH; i++) {
		b = m + this->a[i] * b.a[i];
	}
	return b;

Vect& Vect :: operator=(const Vect& b) {
	for (int i = 0; i < LENGTH; i++) {
		this->a[i] = b.a[i];
	}
	return *this;   

void Vect::print() {
	cout << "(";
	for (int i = 0; i < LENGTH - 1; i++) {
		m = a[i];
		m.print();
		cout << ",";
	}
	m = a[LENGTH - 1];
	m.print();
	cout << ")\n";
};
};
