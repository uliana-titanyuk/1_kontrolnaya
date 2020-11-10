void autotest(void) {
Vect vect1, vect2, vect3;
	CRat arr1[LENGTH];
	CRat arr2[LENGTH];
	CRat m;
	CRat a(1, 2);
	CRat b(2, 3);
	CRat c(1, 2);
	CRatb d(3, 4);
	arr1[0] = a; arr1[1] = b;
	arr2[0] = c; arr2[1] = d;
	vect1 = arr1;
	vect2 = arr2;
	m = vect1 * vect2;
	if ((m.num() == 9) && (m.din() == 16))
		cout << "Autotest sdan" << endl;
	else
		cout << "Autotest provalen" << endl;
};
