Vect input() {
	CRat arr[LENGTH];
	int x, y;
	for (int i = 0; i < LENGTH; i++) {
		cout << "Vvedite " << i + 1 << "-yu drob (paru chisel)\t";
		cin >> x;
		cin >> y;
		CRat m(x, y);
		arr[i] = m;

	}
	Vect vect(arr);
	cout << "Vy vveli vector";
	vect.print();
	cout << endl;
return vect;
};
