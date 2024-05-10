#include "algoritmi.h"


//Sa se afiseze numarul ce are frecventa cea mai mica si cea mai mare din vector
void sol1() {


	int date[2000] = { 32,12,43,21,12,57,12,32,79,57 };

	int dim = 10;
	int f[1000] = {};
	vectorFrecventaNumere(date, dim, f);

	int pozMin = pozVectorMin(f, 1000);
	int pozMax = pozVectorMax(f, 1000);

	cout << pozMin << " are frecventa " << f[pozMin] << endl;
	cout << pozMax << " are frecventa " << f[pozMax] << endl;

}

// Sa se afiseze cifra ce are frecventa cea mai mica , respectiv cea mai mare din vector
void sol2() {

	int date[2000] = { 32,12,43,21,12,57,12,32,79,57 };

	int dim = 10;

	int f[10] = {};

	vectorFrecventaCifreVector(date, dim,f);


	int pozMin = pozVectorMin(f, 10);
	int pozMax = pozVectorMax(f, 10);

	cout << pozMin << " are frecventa " << f[pozMin] << endl;
	cout << pozMax << " are frecventa " << f[pozMax] << endl;

}

// Sa se afiseze cel mai mare nr de 2 cifre care nu se gaseste in vector
void sol3() {

	int date[2000] = { 32,12,43,21,12,57,12,32,79,99 };

	int dim = 10;

	int f[100] = {};

	vectorFrecventaNumere(date, dim, f);


	int i = 99;
	for (i = 99; i >= 10 && f[i] != 0; i--);
	
	cout << i;
}

// Sa se afiseze toate cifrele care nu apar in elemente vectorului.

void sol4() {

	int date[2000] = { 32,12,43,21,12,57,12,32,79,99 };

	int dim = 10;

	int f[10] = {};

	vectorFrecventaCifreVector(date, dim, f);

	for (int i = 0; i < 10; ++i) {
		if (f[i] == 0) {
			cout << i << " ";
		}
	}
}

// Care este frecventa elementului minim, dar a cifrei maxime?

void sol5() {

	int date[2000] = { 32,12,43,21,12,57,12,32,79,99 };

	int dim = 10;

	int f1[1000] = {};

	int f2[10] = {};

	vectorFrecventaNumere(date, dim, f1);

	int pozMin = VectorMin(date, 10);

	cout << pozMin << " are frecventa " << f1[pozMin] << endl;

	vectorFrecventaCifreVector(date, dim, f2);

	int pozMax = pozVectorMax(date, 10);

	cout << pozMax << " are frecventa " << f2[pozMax] << endl;

}


// TEMA :

// Se citeste un numar de maxim 8 cifre de la tastatura
// a) Cate cifre din fiecare nr citit?

void sol6() {


	int n;
	cout << "Introduceti un numar de maxim 8 cifre: ";
	cin >> n;

	afisareFrecventaCifreVec(n);


}

// Care sunt cifrele care apar de mai mult de k ori in numarul citit ( K citit de la tastatura ).

void sol7() {


	int n;
	cout << "Introduceti un numar de maxim 8 cifre: ";
	cin >> n;
	int k;
	cout << "Introduceti valoarea k: ";
	cin >> k;


	afisareFrecventaCifreVecK(n,k);


}

// Realizati cel mai mic numar din cifrele impare care nu apar in numarul citit

void sol8() {

	int n;
	cout << "Introduceti un numar de maxim 8 cifre: ";
	cin >> n;

	int f[10] = {};

	vectorFrecventaCifre(n,f);

	for (int i = 0; i < 10; ++i) {
		if (f[i] == 0 && i%2!=0) {
			cout << i << " ";
		}
	}
}

// Realizati cel mai mare numar care se poate forma din cifrele ce apar in numar citit luate de maxim 2 ori;

void sol9() {

	int n;
	cout << "Introduceti un numar de maxim 8 cifre: ";
	cin >> n;

	afisareFrecventaCifreMax2ori(n);
}

//Care este numarul minim de cifre care ar trebui sa le mai adaugam numarului citit , astfel incat numarul rezultat sa aibe exact acelasi numar de cifre din fiercare.

void sol10() {

	int n;
	cout << "Introduceti un numar de maxim 8 cifre: ";
	cin >> n;

	int f[10] = {};

	vectorFrecventaCifre(n, f);

	int minDiff = 8;

	for (int i = 0; i < 9; ++i) {
		int diff;
		if (f[i] > f[i+1]) {
			diff = f[i] - f[i + 1];
		}
		else {
			diff = f[i + 1] - f[i];
		}
		if (diff < minDiff) {
			minDiff = diff;
		}
	}

	cout << "Numarul minim de cifre pe care trebuie sa le adaugam este: " << minDiff << endl;

}
