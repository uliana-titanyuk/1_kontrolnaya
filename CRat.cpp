#include "CRat.h"
#include "Vect.h"

int CRat :: GetDen() const {
	return den;
};
int CRat :: GetNum() const {
	return num;
};

CRat CRat :: operator+(const CRat& b) {
	CRat m;
	m.num = this->num * b.GetDen() + b.GetNum() * this->den;
	m.den = this->den * b.GetDen();
	return m;
};

CRat CRat :: operator-(const CRat& b) {
	CRat m;
	m.num = this->num * b.GetDen() - b.GetNum() * this->den;
	m.den = this->den * b.GetDen();
	return m;
};

CRat CRat :: operator*(const CRat& b) {
	CRat m;
	m.num = this->num * b.GetNum();
	m.den = this->den * b.GetDen();
	return m;
};

CRat& CRat :: operator=(const CRat& b) {
	num = b.GetNum();
	den = b.GetDen();
	return *this;
};


void CRat :: print() {
		cout << "( " << num << " / " << den << " )";
