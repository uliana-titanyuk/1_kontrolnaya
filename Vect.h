#pragma once
#include <iostream>
#include <string>
#include <algorithm> 
#include <stdio.h>
#include <math.h>
#include "CRat.h"
#define LENGTH 4
using namespace std;



class Vect {
private:
	CRat a[LENGTH];
public:
	Vect() {
		for (int i = 0; i < LENGTH; i++) {
			CRat m;
			a[i] = m;
		};
	}
	Vect(const CRat *b) {
		for (int i = 0; i < LENGTH; i++) {
			a[i] = b[i];
		}
	};
	Vect& operator=(const Vect& b);
	Vect operator+(const Vect& b);
  Vect operator-(const Vect& b);
	Vect Conjugate();
	CRat operator*(Vect& b);
	void print();
};
Vect input(void);
void raschet(void);
void autotest(void);
