#pragma once
#include <iostream>
#include <string.h>
using namespace std;

//taskkill /F /IM fisa-probleme-frecventa-numere.exe

void vectorFrecventaCifre(int numar, int f[]) {


	while (numar != 0) {

		int  cifra = numar % 10;

		f[cifra]++;
		numar = numar / 10;
	}

}


void vectorFrecventaCifreVector(int v[],int dim, int f[]) {

	for (int i = 0; i < dim; i++) {


		int aux = v[i];
		while (v[i] != 0) {

			int cifra = v[i] % 10;

			f[cifra]++;
			v[i] = v[i] / 10;
		}
		v[i] = aux;
	}
	
}


void afisareFrecventaCifreVec(int numar) {


	int f[10]{};

	vectorFrecventaCifre(numar, f);

	for (int i = 1; i < 10; i++) {
		
		if (f[i]!=0) {
			cout << i << " apare de " << f[i] << " ori " << endl;
		}
	}
}


void afisareFrecventaCifreVecK(int numar, int k) {


	int f[10]{};

	vectorFrecventaCifre(numar, f);

	for (int i = 1; i < 10; i++) {

		if (f[i] > k) {
			cout << i << " apare de " << f[i] << " ori " << endl;
		}
	}
}

void afisareFrecventaCifreMax2ori(int numar) {


	int f[10]{};

	vectorFrecventaCifre(numar, f);

	bool found = false;
	for (int i = 1; i < 10; i++) {

		if (f[i] > 0 && f[i] <= 2) {
			found = true;
			cout << i << " apare de " << f[i] << " ori " << endl;
		}
	}
}


void vectorFrecventaNumere(int v[], int dim, int f[]) {


	for (int i = 0; i < dim; i++) {
		f[v[i]]++;
	}

}


void afisareFrecventaNumere(int v[], int dim) {


	int f[1000]{};

	vectorFrecventaNumere(v, dim, f);

	for (int i = 0; i < 1000; i++) {

		if (f[i] != 0) {
			cout << i << " apare de " << f[i] << " ori " << endl;
		}
	}
}


int pozVectorMin(int v[], int dim) {

	int vectorMin = 9999999;
	int poz = 0;

	for (int i = 0; i < dim; i++) {

		if (v[i]<vectorMin  &&v[i]!=0) {
			vectorMin = v[i];
			poz = i;
		}
	}
	return poz;
}

int VectorMin(int v[], int dim) {

	int vectorMin = 9999999;
	int poz = 0;

	for (int i = 0; i < dim; i++) {

		if (v[i] < vectorMin && v[i] != 0) {
			vectorMin = v[i];
		}
	}
	return vectorMin;
}

int pozVectorMax(int v[], int dim) {

	int vectorMax = 0;
	int poz = 0;

	for (int i = 0; i < dim; i++) {

		if (v[i] > vectorMax && v[i] != 0) {
			vectorMax = v[i];
			poz = i;
		}
	}
	return poz;
}

void afisareCelMaiMareNr2Cifre(int v[], int dim) {


	int f[100]{};

	vectorFrecventaNumere(v, dim, f);

	for (int i = 0; i < 100; i++) {

		if (f[i] != 0) {
			cout << i << " apare de " << f[i] << " ori " << endl;
		}
	}
}

