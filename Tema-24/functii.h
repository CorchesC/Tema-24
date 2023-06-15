#pragma once
#include <iostream>
#include <fstream>
using namespace std;

void citireVector(int v[], int& dim) {

	ifstream f("numere.txt");

	f >> dim;
	for (int i = 0; i < dim; i++) {

		f >> v[i];
	}

	f.close();
}
void afisareVector(int v[], int dim) {
	for (int i = 0; i < dim; i++) {
		cout << v[i] << " ";
	}
	cout << endl;

}
void citireVector2(int v[], int& dim) {

	ifstream f("numere2.txt");

	f >> dim;
	for (int i = 0; i < dim; i++) {

		f >> v[i];
	}

	f.close();
}
void citireMatrici(int x[100][100], int& m, int& n) {
	ifstream f("numere.txt");
	f >> m;
	f >> n;
	for (int i = 0; i < m; i++) {

		for (int j = 0; j < n; j++) {

			f >> x[i][j];
		}
	}
}
int nrAparitiiMatrice(int x[100][100], int m, int n, int k) {
	int nrap = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (x[i][j] == k) {
				nrap++;
			}
		}
	}
	return nrap;
}
void bubbleSort(int v[], int d) {
	bool aff = true;
	do {
		aff = true;
		for (int j = 0; j < d - 1; j++) {
			if (v[j] > v[j + 1]) {
				int aux = v[j];
				v[j] = v[j + 1];
				v[j + 1] = aux;

				aff = false;
			}
		}
	} while (aff == false);
}
void afisareCrescatoareElementeMatriceCareAparDoarOdata(int x[100][100], int m, int n) {
	int vt[100], dt = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (nrAparitiiMatrice(x, m, n, x[i][j]) == 1) {
				vt[dt] = x[i][j];
				dt++;
			}
		}
	}
	bubbleSort(vt, dt);
	afisareVector(vt, dt);
}
bool areUltimeleDouaCifreEgale(int a) {
	int uc1 = a % 10;
	int uc2 = (a / 10) % 10;
	if (uc1 == uc2) {
		return true;
	}
	return false;
}
int sumaElementelorCareAuUltimaCifraEgala(int v[], int d) {
	int s = 0;
	for (int i = 0; i < d; i++) {
		if (areUltimeleDouaCifreEgale(v[i]) == true) {
			s += v[i];
		}
	}
	return s;
}
bool apartineVector(int v[], int d, int n) {
	for (int i = 0; i < d; i++) {
		if (v[i] == n) {
			return true;
		}
	}
	return false;
}
int nrAparitiiVector(int v[], int d, int n) {
	int nr = 0;
	for (int i = 0; i < d; i++) {
		if (v[i] == n) {
			nr++;
		}
	}
	return nr;
}
int nrMaximDeAparitii(int v[], int d) {
	int nra = 0;
	for (int i = 0; i < d; i++) {
		int nr = v[i];
		int nrt = 0;
		for (int j = 0; j < d; j++) {
			if (v[j] == nr) {
				nrt++;
			}
		}
		if (nrt > nra) {
			nra = nrt;
		}
	}
	return nra;
}
void afisareElementCuNrMaxDeAparitii(int v[], int d) {
	int max = nrMaximDeAparitii(v, d);
	int vt[100], dt = 0;
	for (int i = 0; i < d; i++) {
		if (nrAparitiiVector(v, d, v[i]) == max && apartineVector(vt, dt, v[i]) == false) {
			cout << v[i] << " " << nrAparitiiVector(v, d, v[i]) << " ";
			vt[dt] = v[i];
			dt++;
		}
	}
	cout << endl;
}
int nrMinimDeAparitii(int v[], int d) {
	int nra = 99999999;
	for (int i = 0; i < d; i++) {
		int nr = v[i];
		int nrt = 0;
		for (int j = 0; j < d; j++) {
			if (v[j] == nr) {
				nrt++;
			}
		}
		if (nrt < nra) {
			nra = nrt;
		}
	}
	return nra;
}
void afisareElementCuNrMinDeAparitii(int v[], int d) {
	int min = nrMinimDeAparitii(v, d);
	int vt[100], dt = 0;
	for (int i = 0; i < d; i++) {
		if (nrAparitiiVector(v, d, v[i]) == min && apartineVector(vt, dt, v[i]) == false) {
			cout << v[i] << " " << nrAparitiiVector(v, d, v[i]) << " ";
			vt[dt] = v[i];
			dt++;
		}
	}
	cout << endl;
}
int primaCifra(int n) {
	int pc = 0;
	while (n != 0) {
		int c = n % 10;
		pc = c;
		n = n / 10;
	}
	return pc;
}
bool primaCifraEgalCuUltima(int n) {
	int uc = n % 10;
	int pc = primaCifra(n);
	if (pc == uc) {
		return true;
	}
	else {
		return false;
	}
}
int sumaElementelorCareAuPrimaCifraEgalaCuUltima(int v[], int d) {
	int s = 0;
	for (int i = 0; i < d; i++) {
		if (primaCifraEgalCuUltima(v[i]) == true) {
			s += v[i];
		}
	}
	return s;
}
int sumaElementelorPareDinVector(int v[], int d) {
	int s = 0;
	for (int i = 0; i < d; i++) {
		if (v[i] % 2 == 0) {
			s += v[i];
		}
	}
	return s;
}
int sumaElementelorDinAlDoileaSirMaiMiciCaSumaElementelorDinPrimulSir(int v1[], int d1, int v2[], int d2) {
	int s = sumaElementelorPareDinVector(v1, d1);
	for (int i = 0; i < d2; i++) {
		if (v2[i] < s) {
			s += v2[i];
		}
	}
	return s;
}
int celMaiMicMultipluComun(int a, int b) {
	int x = a;
	int y = b;
	while (x != y)
	{
		if (x > y) {
			x = x - y;
		}
		else {
			y = y - x;
		}
	}
	int cmmc = (a * b) / x;
	return cmmc;
}
void afisareCMMCAlPerechilorDinVector(int v[], int d) {
	for (int i = 0; i < d-1; i++) {
		cout << celMaiMicMultipluComun(v[i], v[i + 1]) << " ";
	}
	cout << endl;
}
double mediaAritmeticaAElementelorPareDinVector(int v[], int d) {
	double s = 0;
	double nr = 0;
	for (int i = 0; i < d; i++) {
		if (v[i] % 2 == 0) {
			s += v[i];
			nr++;
		}
	}
	double ma = s / nr;
	return ma;
}
int sumaElementelorDinAlDoileaSirMaiMiciCaMediaAritmeticaAElementelorPareDinPrimulSir(int v1[], int d1, int v2[], int d2) {
	int s = 0;
	double ma = mediaAritmeticaAElementelorPareDinVector(v1, d1);
	for (int i = 0; i < d2; i++) {
		if (v2[i] < ma) {
			s += v2[i];
		}
	}
	return s;
}
void numarInVector(int n, int v[], int& d) {
	while (n != 0) {
		v[d] = n % 10;
		d++;
		n = n / 10;
	}
}
int vectorInNumar(int v[], int d) {
	int num = 0;
	for (int i = 0; i < d; i++) {
		num += v[i];
		num = num * 10;
	}
	num = num / 10;
	return num;
}
int inlocuireCifraACuCifraBInN(int n, int a, int b) {
	int v[100], int d = 0;
	numarInVector(n, v, d);
	for (int i = 0; i < d; i++) {
		if (v[i] == a) {
			v[i] = b;
		}
	}
	int nrf = vectorInNumar(v, d);
	return nrf;
}
void afisareCeleMaiMariDouaNumerePare(int v[], int d) {
	int max1 = -1;
	int max2 = -1;
	for (int i = 0; i < d; i++) {
		if (v[i] % 2 == 0 && v[i] > max1) {
			max1 = v[i];
		}
	}
	for (int j = 0; j < d; j++) {
		if (v[j] % 2 == 0 && v[j] != max1 && v[j] > max2) {
			max2 = v[j];
		}
	}
	cout << max1 << " " << max2 << endl;
}
int sumaCifrelorCareNuDividPeB(int n, int b) {
	int s = 0;
	while (n != 0) {
		int c = n % 10;
		if (c != 0 && b % c != 0) {
			s += c;
		}
		n = n / 10;
	}
	return s;
}
int nrElementeMultipluLuiKSiAuUcEgalaCuK(int v[], int d, int k) {
	int nr = 0;
	for (int i = 0; i < d; i++) {
		if (v[i] % k == 0 && (v[i] % 10) == k) {
			nr++;
		}
	}
	return nr;
}
int nrElementeCareApartinIntervalDeterminatDePrimulSiUltimulElement(int v[], int d) {
	int nr = 0;
	int i1 = v[0];
	int i2 = v[d - 1];
	for (int i = 0; i < d; i++) {
		if (v[i] >= i1 && v[i] <= i2) {
			nr++;
		}
	}
	return nr;
}
int pozitiaPrimuluiElementDupaOrdonareaCrescatoareAVectorului(int v[], int d) {
	int poz = -1;
	int pe = v[0];
	bubbleSort(v, d);
	for (int i = 0; i < d; i++) {
		if (v[i] == pe) {
			poz = i;
		}
	}
	return poz;
}
void citireVectorDouble(double v[], double& dim) {

	ifstream f("numere.txt");

	f >> dim;
	for (int i = 0; i < dim; i++) {

		f >> v[i];
	}

	f.close();
}
double mediaArtitmeticaElementeVector(double v[], double d) {
	double s = 0;
	double nr = d - 1;
	for (int i = 0; i < d; i++) {
		s += v[i];
	}
	double ma = s / nr;
	return ma;
}
int nrElementeCaMediaAritmeticaAElementelorVectorului(double v[], double d) {
	int nr = 0;
	int ma = mediaArtitmeticaElementeVector(v, d);
	for (int i = 0; i < d; i++) {
		if (v[i] >= ma) {
			nr++;
		}
	}
	return nr;
}
void bubbleSortDesc(int v[], int d) {
	bool aff = true;
	do {
		aff = true;
		for (int j = 0; j < d - 1; j++) {
			if (v[j] < v[j + 1]) {
				int aux = v[j];
				v[j] = v[j + 1];
				v[j + 1] = aux;

				aff = false;
			}
		}
	} while (aff == false);
}
int pozitiaLuiKInVectorOrdonatDescrescator(int v[], int d, int k) {
	int poz = -1;
	bubbleSortDesc(v, d);
	for (int i = 0; i < d; i++) {
		if (v[i] == k) {
			poz = i;
		}
	}
	return poz;
}
void afisareElementeCareApartinMacarUnuiVector(int v1[], int d1, int v2[], int d2) {
	int vt[100], dt = 0;
	for (int i = 0; i < d1; i++) {
		if (apartineVector(vt, dt, v1[i]) == false) {
			vt[dt] = v1[i];
			dt++;
		}
	}
	for (int j = 0; j < d2; j++) {
		if (apartineVector(vt, dt, v2[j]) == false) {
			vt[dt] = v2[j];
			dt++;
		}
	}
	bubbleSort(vt, dt);
	afisareVector(vt, dt);
}
bool existaInAmbiiVectori(int v1[], int d1, int v2[], int d2, int n) {
	for (int i = 0; i < d1; i++) {
		for (int j = 0; j < d2; j++) {
			if (v1[i] == n && v2[j] == n) {
				return true;
			}
		}
		return false;
	}
}
void afisareElementeCareExsistaInAmbiiVectori(int v1[], int d1, int v2[], int d2) {
	int vt[100], dt = 0;
	for (int i = 0; i < d1; i++) {
		if (existaInAmbiiVectori(v1, d1, v2, d2, v1[i]) == true) {
			vt[dt] = v1[i];
			dt++;
		}
	}
	for (int j = 0; j < d2; j++) {
		if (existaInAmbiiVectori(v1, d1, v2, d2, v2[j]) == true) {
			vt[dt] = v2[j];
			dt++;
		}
	}
	bubbleSort(vt, dt);
	afisareVector(vt, dt);
}
int elementMaxPoz(int v[], int d) {
	int poz = -1;
	int max = -1;
	for (int i = 0; i < d; i++) {
		if (v[i] > max) {
			max = v[i];
			poz = i;
		}
	}
	return poz;
}
int elementMinPoz(int v[], int d) {
	int poz = -1;
	int min = 999999;
	for (int i = 0; i < d; i++) {
		if (v[i] < min) {
			min = v[i];
			poz = i;
		}
	}
	return poz;
}
void sterge(int v[], int& d, int p) {

	for (int i = p; i < d; i++) {
		v[i] = v[i + 1];
	}
	d--;
}
double mediaAritmeticaDupaElminareMaxMin(int v[], int& d) {
	int max = elementMaxPoz(v, d);
	int min = elementMinPoz(v, d);
	sterge(v, d, max);
	sterge(v, d, min);
	double s = 0;
	double nr = d - 1;
	for (int i = 0; i < d; i++) {
		s += v[i];
	}
	double ma = s / nr;
	return ma;
}
int nrMinimDinIntervalCareApartineVector(int a, int b, int v[], int d) {
	for (int i = a; i <= b; i++) {
		if (apartineVector(v, d, i) == true) {
			return i;
		}
	}
	return -1;
}
int numarFormatDinCifrelePareDinVector(int v[], int d) {
	int nr = 0;
	for (int i = 0; i < d; i++) {
		if (v[i] % 2 == 0) {
			nr = v[i];
			nr = nr * 10;
		}
	}
	return nr;
}
int sumaCifrelorCareDividPeB(int n, int b) {
	int s = 0;
	while (n != 0) {
		int c = n % 10;
		if (c != 0 && b % c == 0) {
			s += c;
		}
		n = n / 10;
	}
	return s;
}
int numarAparitiiVector(int v[], int d, int n) {
	int nr = 0;
	for (int i = 0; i < d; i++) {
		if (v[i] == n) {
			nr++;
		}
	}
	return nr;
}
int sumaCifrePare(int n) {
	int s = 0;
	while (n != 0) {
		int c = n % 10;
		if (c % 2 == 0) {
			s += c;
		}
		n = n / 10;
	}
	return s;
}
int sumaCifreImpare(int n) {
	int s = 0;
	while (n != 0) {
		int c = n % 10;
		if (c % 2 != 0) {
			s += c;
		}
		n = n / 10;
	}
	return s;
}
bool areSumaCifrelorPareSiImpareEgala(int n) {
	if (sumaCifrePare(n) == sumaCifreImpare(n)) {
		return true;
	}
	return false;
}
void afisareCelMaiMicElementSiNumarulSauDeAparitiiCareAreSumaCifrelorPareSiImpareEgale(int v[], int d) {
	int min = 999999;
	for (int i = 0; i < d; i++) {
		if (sumaCifrePare(v[i]) == sumaCifreImpare(v[i]) && v[i] < min) {
			min = v[i];
		}
	}
	cout << min << " " << numarAparitiiVector(v, d, min) << endl;
}
bool apartineInterval(int n, int a, int b) {
	for (int i = a; i <= b; i++) {
		if (i == n) {
			return true;
		}
	}
	return false;
}
int numarDinCifreleCareNuApartinIntervalului(int n, int a, int b) {
	int nrf = 0;
	int p = 1;
	while (n != 0) {
		int c = n % 10;
		if (apartineInterval(c,a,b) == false ) {
			nrf = nrf + c * p;
		}
		p = p * 10;
		n = n / 10;
	}
	return nrf;
}
int numarDivizori(int n) {
	int nrd = 0;
	for (int x = 1; x <= n; x++) {
		if (n % x == 0) {
			nrd++;
		}
	}
	return nrd;
}
bool numarPrim(int n) {
	if (numarDivizori(n) == 2) {
		return true;
	}
	else {
		return false;
	}
}
void afisareCelMaiMareElementPrimSiNumarulSauDeAparitii(int v[], int d) {
	int max = -1;
	for (int i = 0; i < d; i++) {
		if (numarPrim(v[i]) == true && v[i] > max) {
			max = v[i];
		}
	}
	cout << max << " " << numarAparitiiVector(v, d, max) << endl;
}
void afisareCrescatoareElementeMaiMariCaK(int v[], int d, int k) {
	int vt[100], dt = 0;
	for (int i = 0; i < d; i++) {
		if (v[i] > k) {
			vt[dt] = v[i];
			dt++;
		}
	}
	bubbleSort(vt, dt);
	afisareVector(vt, dt);
}
int cifraMax(int n) {
	int max = -1;
	while (n != 0) {
		int c = n % 10;
		if (c > max) {
			max = c;
		}
		n = n / 10;
	}
	return max;
}
void afisareCifreMaiMariCaToateCifreleDinN(int n) {
	int max = cifraMax(n);
	int ctr = 0;
	while (ctr <= max) {
		cout << ctr << " ";
		ctr++;
	}
	cout << endl;
}
void afisarePerechiCuSumaMaxima(int v[], int d) {
	int max = -1;
	int poz = 0;
	for (int i = 0; i < d-1; i++) {
		if (v[i] + v[i + 1] > max) {
			max = v[i] + v[i + 1];
			poz = i;
		}
	}
	for (int j = 0; j < d - 1; j++) {
		if (j == poz) {
			cout << v[j] << " " << v[j + 1] << endl;
		}
	}
}
void afisareCrescatoareElementeCareAparDoarOdata(int v[], int d) {
	int vt[100], dt = 0;
	for (int i = 0; i < d; i++) {
		if (numarAparitiiVector(v, d, v[i]) == 1) {
			vt[dt] = v[i];
			dt++;
		}
	}
	bubbleSort(vt, dt);
	afisareVector(vt, dt);
}
int sumaElementelorImpareDePePozitiiPare(int v[], int d) {
	int s = 0;
	for (int i = 0; i < d; i++) {
		if (i % 2 == 0 && v[i] % 2 != 0) {
			s += v[i];
		}
	}
	return s;
}
int numarMaximDinVector(int v[], int d) {
	bubbleSortDesc(v, d);
	int nr = vectorInNumar(v, d);
	return nr;
}
void afisareElementeCareAuCelPutinKDivizori(int v[], int d, int k) {
	for (int i = 0; i < d; i++) {
		if (numarDivizori(v[i]) >= k) {
			cout << v[i] << " ";
		}
	}
	cout << endl;
}
bool estePutereALuiK(int n, int k) {
	for (int i = 0; i < 100; i++) {
		if (pow(k, i) == n) {
			return true;
		}
	}
	return false;
}
void afisareNumereCareSuntPuteriALuiK(int v[], int d, int k) {
	for (int i = 0; i < d; i++) {
		if (estePutereALuiK(v[i], k) == true) {
			cout << v[i] << " ";
		}
	}
	cout << endl;
}
int sumaCifre(int n) {
	int s = 0;
	while (n != 0) {
		int c = n % 10;
		s += c;
		n = n / 10;
	}
	return s;
}
int sumaCifrelorMaximaDinVector(int v[], int d) {
	int scmax = -1;
	for (int i = 0; i < d; i++) {
		if (sumaCifre(v[i]) > scmax) {
			scmax = sumaCifre(v[i]);
		}
	}
	return scmax;
}
void afisareElementeCareAuSumaMaximaDeCifreDinVecor(int v[], int d) {
	int scmax = sumaCifrelorMaximaDinVector(v, d);
	for (int i = 0; i < d; i++) {
		if (sumaCifre(v[i]) == scmax) {
			cout << v[i] << " ";
		}
	}
	cout << endl;
}
void aifsareDivizoriiLuiNDinIntevalulAB(int a, int b, int n) {
	for (int i = a; i <= b; i++) {
		if (n & i == 0) {
			cout << i << " ";
		}
	}
	cout << endl;
}
void afisareCrescatoareElementeCareAparDeCelPutin2Ori(int v[], int d) {
	int vt[100], dt = 0;
	for (int i = 0; i < d; i++) {
		if (numarAparitiiVector(v, d, v[i]) >= 2) {
			vt[dt] = v[i];
			dt++;
		}
	}
	bubbleSort(vt, dt);
	afisareVector(vt, dt);
}
void afisarePerechiCuAceeasiParitate(int v[], int d) {
	for (int i = 0; i < d; i++) {
		for (int j = 0; j < d; j++) {
			if (v[i] % 2 == 0) {
				if (v[j] % 2 == 0) {
					cout << v[i] << " " << v[j] << endl;
				}
			}
			if (v[i] % 2 != 0) {
				if (v[j] % 2 != 0) {
					cout << v[i] << " " << v[j] << endl;
				}
			}
		}
	}
}
int oglindit(int n) {
	int ogl = 0;
	while (n != 0) {
		int c = n % 10;
		n = n / 10;
		ogl = ogl * 10 + c;
	}
	return ogl;
}
bool estePalindrom(int n) {
	if (oglindit(n) == n) {
		return true;
	}
	return false;
}
int celMaiApropiatPalindrom(int n) {
	if (estePalindrom(n) == true) {
		return n;
	}
	else {
		for (int i = n - 1; i > 0; i--) {
			if (estePalindrom(i) == true) {
				return i;
			}
		}
	}
	return 0;
}
bool esteElementAproapePrim(int n) {
	bool aff = false;
	for (int i = 0; aff == false; i++) {
		if (numarPrim(i) == true) {
			for (int j = 0; aff == false; j++) {
				if (numarPrim(j) == true && (i * j) == n) {
					aff = true;
				}
			}
		}
	}
	return aff;
}
bool esteNumarAproapePrim(int n) {
	bool aff = false;
	for (int i = 0; aff == false; i++) {
		if (numarPrim(i) == true) {
			for (int j = 0; aff == false; j++) {
				if (numarPrim(j) == true && (i * j) == n) {
					aff = true;
				}
			}
		}
	}
	return aff;
}
int celMaiMareElementAproapePrim(int v[], int d) {
	int max = -1;
	for (int i = 0; i < d; i++) {
		if (esteNumarAproapePrim(v[i]) == true && v[i] > max) {
			max = v[i];
		}
	}
	return max;
}
void afisareCeleMaiMariMElemente(int v[], int d, int m) {
	int ctr = 0;
	int max2 = -2;
	while (ctr < m) {
		int max = -1;
		for (int i = 0; i < d; i++) {
			if (v[i] > max && max != max2) {
				max = v[i];
			}
		}
		cout << max << " ";
		max2 = max;
	}
	cout << endl;
}
bool esteOrdonatCrescator(int v[], int d) {
	for (int i = 0; i < d; i++) {
		if (v[i] > v[i + 1]) {
			return false;
		}
	}
	return true;
}
bool esteOrdonatDescrescator(int v[], int d) {
	for (int i = 0; i < d; i++) {
		if (v[i] < v[i + 1]) {
			return false;
		}
	}
	return true;
}
int cumEsteOrdonatSirul(int v[], int d) {
	if (esteOrdonatCrescator(v, d) == true) {
		return 1;
	}
	else if (esteOrdonatDescrescator(v, d) == true) {
		return 2;
	}
	else {
		return -1;
	}
}
int celMaiMicNumarDinCifreleLuiN(int n) {
	int v[100], d = 0;
	numarInVector(n, v, d);
	bubbleSort(v, d);
	int nrf = vectorInNumar(v, d);
	return nrf;
}
int nrElementePozitive(int v[], int d) {
	int nr = 0;
	for (int i = 0; i < d; i++) {
		if (v[i] >= 0) {
			nr++;
		}
	}
	return nr;
}
int nrElementeNegative(int v[], int d) {
	int nr = 0;
	for (int i = 0; i < d; i++) {
		if (v[i] < 0) {
			nr++;
		}
	}
	return nr;
}
int cumEsteRaportulDeElementePozitiveSauNegative(int v[], int d) {
	int nrPoz = nrElementePozitive(v, d);
	int nrNeg = nrElementeNegative(v, d);
	if (nrNeg > nrPoz) {
		return -1;
	}
	if (nrPoz == nrNeg) {
		return 0;
	}
	if (nrPoz > nrNeg) {
		return 1;
	}
}
void afisareCrescatorElementePareCareExsistaInAmbiiVectori(int v1[], int d1, int v2[], int d2) {
	int vt[100], dt = 0;
	for (int i = 0; i < d1; i++) {
		if (v1[i] % 2 == 0 && existaInAmbiiVectori(v1, d1, v2, d2, v1[i]) == true) {
			vt[dt] = v1[i];
			dt++;
		}
	}
	for (int j = 0; j < d2; j++) {
		if (v2[j] % 2 == 0 && existaInAmbiiVectori(v1, d1, v2, d2, v2[j]) == true) {
			vt[dt] = v2[j];
			dt++;
		}
	}
	bubbleSort(vt, dt);
	afisareVector(vt, dt);
}
void afisareCeleMaiMiciDouaElementeCu2Cifre(int v[], int d) {
	int min1 = 999999;
	int min2 = 999999;
	for (int i = 0; i < d; i++) {
		if (nrCifre(v[i]) == 2 && v[i] < min1) {
			min1 = v[i];
		}
	}
	for (int j = 0; j < d; j++) {
		if (nrCifre(v[j]) == 2 && v[j] != min1 && v[j] > min2) {
			min2 = v[j];
		}
	}
}
int sumaElementeDivizibileCu3(int v[], int d) {
	int s = 0;
	for (int i = 0; i < d; i++) {
		if (i % 3 == 0) {
			s += v[i];
		}
	}
	return s;
}
void afisareElementeCuPrimaSiUltimaCifraEgala(int v[], int d) {
	for (int i = 0; i < d; i++) {
		if (v[i] < 10) {
			cout << v[i] << " ";
		}
		else if (primaCifraEgalCuUltima(v[i]) == true) {
			cout << v[i] << " ";
		}
	}
	cout << endl;
}
int sumaDivizorilorPropii(int n) {
	int s = 0;
	for (int x = 1; x < n; x++) {
		if (x != 1 && n % x == 0) {
			s += x;
		}
	}
	return s;
}
void afisareCrescatoareSumaDivizorilorElementelor(int v[], int d) {
	int vt[100], dt = 0;
	for (int i = 0; i < d; i++) {
		vt[dt] = sumaDivizorilorPropii(v[i]);
		dt++;
	}
	bubbleSort(vt, dt);
	afisareVector(vt, dt);
}
int ultimaCifraPara(int n) {
	while (n != 0) {
		int c = n % 10;
		if (c % 2 == 0) {
			return c;
		}
		n = n / 10;
	}
	return -1;
}
int celMaiMareNumarDinUltimeleCifrePareAleFiecaruiElement(int v[], int d) {
	int vt[100], dt = 0;
	for (int i = 0; i < d; i++) {
		if (ultimaCifraPara(v[i]) != -1) {
			vt[dt] = ultimaCifraPara(v[i]);
			dt++;
		}
	}
	bubbleSort(vt, dt);
	int nr = vectorInNumar(vt, dt);
	return nr;
}