#pragma once
#include "functii.h"
using namespace std;

void sol1() {
	//Scrieţi programul C / C++ care, utilizând un algoritm eficient din punct de vedere al timpului de executare, afişează pe ecran, în ordine crescătoare, toate numerele care au apărut o singură dată din fişierul NUMERE.IN, despărţite prin câte un spaţiu.
	int x[100][100], m = 0, n = 0;
	citireMatrici(x, m, n);
	afisareCrescatoareElementeMatriceCareAparDoarOdata(x, m, n);
}
void sol2() {
	//Scrieţi în C/C++ definiţia completă a subprogramului suma care are doi parametri: -n, prin care primeşte un număr natural(1≤n≤100); -v, prin care primeşte un tablou unidimensional cu n elemente, numere întregi situate în intervalul[10, 30000].Funcţia returnează suma numerelor din tabloul v care au ultimeledouă cifre identice.
	int v[100], d = 0;
	citireVector(v, d);
	int s = sumaElementelorCareAuUltimaCifraEgala(v, d);
	cout << s << endl;
}
void sol3() {
	//Scrieţi programul C/C++ care citeşte toate numerele din fişierul NUMERE.IN şi creează fişierul text NUMERE.OUT care să conţină pe prima linie cel mai mare număr de două cifre din fişierul NUMERE.IN, şi de câte ori apare el în acest fişier, iar pe a doua linie, cel mai mic număr de două cifre din fişierul NUMERE.IN şi de câte ori apare el în acest fişier.Alegeţi o metodă de rezolvare eficientă din punct de vedere al memoriei utilizate şi al timpului de executare.
	int v[100], d = 0;
	citireVector(v, d);
	afisareElementCuNrMaxDeAparitii(v, d);
	afisareElementCuNrMinDeAparitii(v, d);
}
void sol4() {
	//Scrieţi în C/C++ definiţia completă a subprogramului suma care are doi parametri:
	//-n, prin care primeşte un număr natural(1≤n≤100);
	//-v, prin care primeşte un tablou unidimensional cu n elemente, numere întregi, fiecare având exact trei cifre.
	//Funcţia returnează suma elementelor din tablou care au prima cifră egală cu ultima cifră.
	int v[100], d = 0;
	citireVector(v, d);
	int s = sumaElementelorCareAuPrimaCifraEgalaCuUltima(v, d);
	cout << s << endl;
}
void sol5() {
	//Scrieţi programul C/C++ care citeşte de la tastatură un număr natural n (1≤n≤100), apoi un şir de n numere întregi, cu cel mult 2 cifre fiecare, notat a1, a2, a3, …an, apoi un al doilea şir de n numere întregi, cu cel mult 2 cifre fiecare, notat b1, b2, b3, …bn.Fiecare şir conţine atât valori pare, cât şi impare.Programul afişează pe ecran suma acelor numere impare din şirul b care sunt mai mici decât suma tuturor numerelor pare din şirul a.
	int v1[100], d1 = 0;
	citireVector(v1, d1);
	int v2[100], d2 = 0;
	citireVector(v2, d2);
	int s = sumaElementelorDinAlDoileaSirMaiMiciCaSumaElementelorDinPrimulSir(v1, d1, v2, d2);
	cout << s << endl;
}
void sol6() {
	//Scrieţi un program C/C++ care, pentru fiecare linie k din fişierul NUMERE.IN, citeşte cele două numere de pe această linie şi scrie în fişierul text NUMERE.OUT, tot pe linia k, cel mai mic multiplu comun al acestora, ca în exemplu.
	int v[100], d = 0;
	citireVector(v, d);
	afisareCMMCAlPerechilorDinVector(v, d);
}
void sol7() {
	// Scrieţi un program C/C++ care, pentru fiecare linie k din fişierul NUMERE.IN, citeşte cele două numere de pe această linie şi scrie în fişierul text NUMERE.OUT, tot pe linia k, cel mai mic multiplu comun al acestora, ca în exemplu.
	int v1[100], d1 = 0;
	citireVector(v1, d1);
	int v2[100], d2 = 0;
	citireVector(v2, d2);
	int s = sumaElementelorDinAlDoileaSirMaiMiciCaMediaAritmeticaAElementelorPareDinPrimulSir(v1, d1, v2, d2);
	cout << s << endl;
}
void sol8() {
	//Scrieţi definiţia completă a subprogramului numar, cu trei parametri, care primeşte prin intermediul parametrului n un număr natural format din cel mult 9 cifre, iar prin intermediul parametrilor c1 şi c2 câte o cifră nenulă; subprogramul retunează numărul obţinut prin înlocuirea în numărul primit prin parametrul n a fiecărei apariţii a cifrei c1 cu cifra c2.Dacă c1 nu apare în n, subprogramul returnează valoarea n.
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n; 
	cout << "Introduceti a: " << endl;
	int a;
	cin >> a;
	cout << "Introduceti b: " << endl;
	int b;
	cin >> b;
	int nrf = inlocuireCifraACuCifraBInN(n, a, b);
	cout << nrf << endl;
}
void sol9() {
	//Scrieţi un program C/C++ care determină cele mai mari două numere pare din fişier, utilizând un algoritm eficient din punct de vedere al timpului de executare şi al spaţiului de memorie utilizat.Cele două numere vor fi afişate pe ecran, în ordine descrescătoare, separate printr - un spaţiu.
	int v[100], d = 0;
	citireVector(v, d);
	afisareCeleMaiMariDouaNumerePare(v, d);
}
void sol10() {
	//Scrieţi definiţia completă a subprogramului reduce, cu doi parametri, care primeşte prin intermediul parametrilor a şi b două numere naturale formate din cel mult 9 cifre fiecare. Funcţia returnează o valoare obţinută din numărul a prin însumarea acelor cifre diferite de 0 ale numărului a care NU divid numărul b.Dacă nu există asemenea cifre, se va returna valoarea 0.
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n;
	cout << "Introduceti b: " << endl;
	int b;
	cin >> b;
	int s = sumaCifrelorCareNuDividPeB(n, s);
}
void sol11() {
	//Scrieţi definiţia completă a subprogramului multiplu care are 3 parametri: a, prin care primeşte un tablou unidimensional cu maximum 100 de numere naturale mai mici decât 1000, n, numărul efectiv de elemente ale tabloului şi k, un număr natural(k≤9). Subprogramul returnează numărul de elemente din tablou care sunt multipli ai numărului k şi au ultima cifră egală cu k.
	int v[100], d = 0;
	citireVector(v, d);
	cout << "Introduceti k: " << endl;
	int k;
	cin >> k;
	int nr = nrElementeMultipluLuiKSiAuUcEgalaCuK(v, d, k);
	cout << nr << endl;
}
void sol12() {
	//Scrieţi definiţia completă a subprogramului interval care are doi parametri a şi n, prin care primeşte un tablou unidimensional cu maximum 100 de numere naturale mai mici decât 1000 şi respectiv numărul efectiv de elemente din tabloul unidimensional. Subprogramul returnează numărul de elemente din tabloul unidimensional care aparţin intervalului închis determinat de primul şi respectiv ultimul element al tabloulu
	int v[100], d = 0;
	citireVector(v, d);
	int nr = nrElementeCareApartinIntervalDeterminatDePrimulSiUltimulElement(v, d);
}
void sol13() {
	//În fişierul numere.txt pe prima linie este memorat un număr natural n (n≤10000), iar pe linia următoare un şir de n numere naturale distincte două câte două, separate prin câte un spaţiu, cu maximum 4 cifre fiecare.Se cere afişarea pe ecran a poziţiei pe care s - ar găsi primul element din şirul aflat pe linia a doua a fişierului, în cazul în care şirul ar fi ordonat crescător.Numerotarea poziţiilor elementelor în cadrul şirului este de la 1 la n.Alegeţi un algoritm de rezolvare eficient din punct de vedere al memoriei utilizate şi al timpului de executare.
	int v[100], d = 0;
	citireVector(v, d);
	int poz = pozitiaPrimuluiElementDupaOrdonareaCrescatoareAVectorului(v, d);
	cout << poz << endl;
}
void sol14() {
	//Scrieţi definiţia completă a subprogramului count care are doi parametri, a şi n, prin care primeşte un tablou unidimensional cu maximum 100 de numere reale şi respectiv numărul efectiv de elemente din tablou.Subprogramul returnează numărul de elemente din tabloul a care sunt mai mari sau cel puţin egale cu media aritmetică a tuturor elementelor din tablou.
	double v[100], d = 0;
	citireVectorDouble(v, d);
	int nr = nrElementeCaMediaAritmeticaAElementelorVectorului(v, d);
	cout << nr << endl;
}
void sol15() {
	//În fişierul numere.txt este memorat un şir de maximum 10000 numere naturale, distincte două câte două, cu maximum 4 cifre fiecare, separate prin câte un spaţiu.Pentru un număr k citit de la tastatură, se cere afişarea pe ecran a poziţiei pe care se va găsi acesta în şirul de numere din fişier, dacă şirul ar fi ordonat descrescător, sau mesajul nu există, dacă numărul k nu se află printre numerele din fişier.Alegeţi un algoritm eficient de rezolvare din punct de vedere al memoriei utilizate şi al timpului de executare.
	int v[100], d = 0;
	citireVector(v, d);
	cout << "Introduceti k: " << endl;
	int k;
	cin >> k;
	pozitiaLuiKInVectorOrdonatDescrescator(v, d, k);
}
void sol16() {
	//În fişierul nr1.txt este memorată pe prima linie o valoare naturală n de cel mult 8 cifre, iar pe linia următoare sunt memorate n numere naturale, cu maximum 4 cifre fiecare, ordonate strict crescător şi separate prin câte un spaţiu.În fişierul nr2.txt este memorată pe prima linie o valoare naturală m de cel mult 8 cifre, iar pe linia următoare sunt memorate m numere naturale, cu maximum 4 cifre fiecare, ordonate strict crescător şi separate prin câte un spaţiu.
	//Se cere afişarea pe ecran, separate prin câte un spaţiu, în ordine strict crescătoare, a tuturor numerelor aflate pe a doua linie în cel puţin unul dintre cele două fişiere.În cazul în care un număr apare în ambele fişiere, el va fi afişat o singură dată. Alegeţi un algoritm de rezolvare eficient din punct de vedere al memoriei utilizate şi al timpului de executare.
	int v1[100], d1 = 0;
	citireVector(v1, d1);
	int v2[100], d2 = 0;
	citireVector2(v2, d2);
	afisareElementeCareApartinMacarUnuiVector(v1, d1, v2, d2);
}
void sol17() {
	//În fişierul nr1.txt este memorată pe prima linie o valoare naturală n de cel mult 8 cifre, iar pe linia următoare sunt memorate n numere naturale, cu maximum 4 cifre fiecare, ordonate strict crescător şi separate prin câte un spaţiu.În fişierul nr2.txt este memorată pe prima linie o valoare naturală m de cel mult 8 cifre, iar pe linia următoare sunt memorate m numere naturale, cu maximum 4 cifre fiecare, ordonate strict crescător şi separate prin câte un spaţiu.
	//Se cere afişarea pe ecran, separate prin câte un spaţiu, în ordine strict crescătoare, a tuturor numerelor aflate pe a doua linie atât în primul cât şi în al doilea fişier. Alegeţi un algoritm de rezolvare eficient din punct de vedere al memoriei utilizate şi al timpului de executare.
	int v1[100], d1 = 0;
	citireVector(v1, d1);
	int v2[100], d2 = 0;
	citireVector2(v2, d2);
	afisareElementeCareExsistaInAmbiiVectori(v1, d1, v2, d2);
}
void sol18() {
	//Scrieţi un program C/C++ care citeşte de la tastatură o valoare naturală nenulă n, (3≤n≤100), apoi cele n elemente distincte ale unui tablou unidimensional x. Fiecare dintre aceste elemente este un număr natural având cel mult patru cifre.Folosind apeluri utile ale subprogramului p, programul calculează şi afişează pe ecran media aritmetică a elementelor care ar rămâne în tabloul x dacă s - ar elimina valoarea minimă şi valoarea maximă din tablou. Valoarea afişată va avea cel mult 3 cifre după virgulă.
	int v[100], d = 0;
	citireVector(v, d);
	double ma = mediaAritmeticaDupaElminareMaxMin(v, d);
	cout << ma << endl;
}
void sol19() {
	//Scrieţi un program C/C++, eficient din punct de vedere al timpului de executare, care afişează pe ecran cel mai mic număr întreg din intervalul închis[a, b] care se găseşte în şirul dat.Dacă nu există un astfel de număr, programul afişează textul NU.
	int v[100], d = 0;
	citireVector(v, d);
	cout << "Introduceti a: " << endl;
	int a;
	cin >> a;
	cout << "Introduceti b: " << endl;
	int b;
	cin >> b;
	int nr = nrMinimDinIntervalCareApartineVector(a, b, v, d);
	cout << nr << endl;
}
void sol20() {
	//Subprogramul f primeşte prin intermediul parametrului n un număr natural nenul (1≤n≤9), iar prin intermediul parametrului a, un tablou unidimensional care conţine n valori naturale, fiecare dintre acestea reprezentând câte o cifră a unui număr. Astfel, a0 reprezintă cifra unităţilor numărului, a1 cifra zecilor etc. Subprogramul furnizează prin parametrul k o valoare naturală egală cu numărul obţinut din cifrele pare reţinute în tabloul a sau valoarea - 1 dacă în tablou nu există nicio cifră pară. Scrieţi definiţia completă a subprogramului f.
	int v[100], d = 0;
	citireVector(v, d);
	int nr = numarFormatDinCifrelePareDinVector(v, d);
	cout << nr << endl;
}
// var 87 4
void sol21() {
	//Scrieţi definiţia completă a subprogramului reduce, cu doi parametri, care primeşte prin intermediul parametrilor a şi b două numere naturale formate din cel mult 9 cifre fiecare. Funcţia returnează o valoare obţinută din numărul a prin însumarea acelor cifre diferite de 0 ale numărului a care divid numărul b.Dacă nu există asemenea cifre, se va returna valoarea 0.
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n;
	cout << "Introduceti b: " << endl;
	int b;
	cin >> b;
	int s = sumaCifrelorCareDividPeB(n, s);
}
void sol22() {
	//Scrieţi un program C/C++ care afişează pe ecran cel mai mic număr din fişier pentru care suma cifrelor pare este egală cu suma cifrelor impare, precum şi numărul de apariţii în fişier ale acestui număr, folosind o metodă eficientă din punctul de vedere al timpului de executare.Cele două valori vor fi afişate pe o linie a ecranului, separate printr - un spaţiu
	int v[100], d = 0;
	citireVector(v, d);
	afisareCelMaiMicElementSiNumarulSauDeAparitiiCareAreSumaCifrelorPareSiImpareEgale(v, d);
}
void sol23() {
	//Scrieţi definiţia completă a subprogramului numar, cu patru parametri, care primeşte prin intermediul parametrului n un număr natural format din cel mult 9 cifre, iar prin intermediul parametrilor c1 şi c2 câte o cifră cu proprietatea c1 < c2; subprogramul furnizează prin intermediul celui de al patrulea parametru, x, o valoare obţinută prin eliminarea din numărul primit prin parametrul n a fiecărei cifre cuprinse în intervalul închis[c1, c2].Dacă toate cifrele lui n aparţin acestui interval, valoarea furnizată prin x va fi 0.
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n;
	cout << "Introduceti a: " << endl;
	int a;
	cin >> a;
	cout << "Introduceti b: " << endl;
	int b;
	cin >> b;
	int nr = numarDinCifreleCareNuApartinIntervalului(n, a, b);
	cout << nr << endl;
}
void sol24() {
	//Scrieţi un program C/C++ care determină şi afişează pe ecran cel mai mare număr prim care apare în fişier şi numărul de apariţii ale acestuia, utilizând un algoritm eficient din punct de vedere al timpului de executare şi al spaţiului de memorie utilizat.Programul afişează pe ecran cele două valori determinate, separate printr - un spaţiu. Exemplu: dacă fişierul conţine numerele : 5 8 9 1 9 5 1 1 2 2 se va afişa 5 2. (
	int v[100], d = 0;
	citireVector(v, d);
	afisareCelMaiMareElementPrimSiNumarulSauDeAparitii(v, d);
}
void sol25() {
	//Scrieţi un program C/C++ care afişează pe ecran, în ordine descrescătoare, acele numere din fişier care sunt mai mari decât un număr natural k, citit de la tastatură, utilizând un algoritm eficient din punct de vedere al timpului de executare.Dacă un număr apare de mai multe ori, şi este mai mare decât k, se va afişa o singură dată.Numerele vor fi afişate câte 20 pe fiecare linie(cu excepţia ultimei linii care poate să conţină mai puţine valori), separate prin câte un spaţiu.
	int v[100], d = 0;
	citireVector(v, d);
	cout << "Introduceti a: " << endl;
	int k;
	cin >> k;
	afisareCrescatoareElementeMaiMariCaK(v, d,k);
}
void sol26() {
	//Spunem că n poate fi o reprezentare în baza b (1<b≤10), dacă toate cifrele lui n sunt strict mai mici decât b.Scrieţi un program care citeşte de la tastatură o valoare naturală n cu cel mult 9 cifre şi, utilizând apeluri ale funcţiei verif, afişează pe ecran, în ordine crescătoare, cu spaţii între ele, toate valorile lui b pentru care valoarea citită nu poate fi o reprezentare în baza b.
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n;
	afisareCifreMaiMariCaToateCifreleDinN(n);
}
void sol27() {
	//Scrieţi un program C/C++ care afişează două numere pozitive, aflate unul după altul în fişier, a căror sumă este maximă, utilizând un algoritm eficient din punct de vedere al timpului de executare şi al spaţiului de memorie utilizat.Dacă există mai multe soluţii, se afişează doar acea pereche pentru care diferenţa dintre cele două numere este maximă. Numerele vor fi afişate pe ecran, în ordinea din fişier, separate printr - un spaţiu.
	int v[100], d = 0;
	citireVector(v, d);
	afisarePerechiCuSumaMaxima(v, d);
}
void sol28() {
	//Scrieţi un program C/C++ care determină în mod eficient, din punct de vedere al timpului de executare, numerele ce apar o singură dată în a doua linie a fişierului.Aceste numere vor fi afişate pe ecran în ordine crescătoare, separate prin câte un spaţiu.
	int v[100], d = 0;
	citireVector(v, d);
	afisareCrescatoareElementeCareAparDoarOdata(v, d);
}
void sol29() {
	//Scrieţi definiţia completă a unui subprogram P cu doi parametri, care primeşte prin intermediul primului parametru, n, un număr natural nenul(1≤n≤100) şi prin intermediul celui de - al doilea parametru, a, un tablou unidimensional cu elementele numerotate de la 1 la n, numere întregi de cel mult 4 cifre fiecare.Subprogramul returnează suma tuturor numerelor impare aflate pe poziţii pare din tablou.
	int v[100], d = 0;
	citireVector(v, d);
	int s = sumaElementelorImpareDePePozitiiPare(v, d);
	cout << s << endl;
}
void sol30() {
	//Scrieţi un program C/C++ care determină în mod eficient, din punct de vedere al timpului de executare, cel mai mare număr ce se poate forma cu toate cifrele conţinute de a doua linie a fişierului numere.txt.Numărul determinat se va afişa pe ecran.
	int v[100], d = 0;
	citireVector(v, d);
	int nr = numarMaximDinVector(v, d);
	cout << nr << endl;
}
void sol31() {
	//Scrieţi un program C/C++, eficient atât din punct de vedere al timpului de executare, care afişează pe ecran toate numerele situate pe a doua linie a fişierului, în ordinea crescătoare a valorilor lor, separate prin câte un spaţiu.
	int v[100], d = 0;
	citireVector(v, d);
	bubbleSort(v, d);
	afisareVector(v, d);
}
void sol32() {
	//Fişierul bac.txt conţine pe prima linie un număr natural n (n≤100), iar pe a doua linie, separate prin câte un spaţiu, n numere naturale nenule, cu cel mult 4 cifre fiecare.Scrieţi programul C / C++ care citeşte de la tastatură un număr natural k(k≤25), construieşte în memorie şi afişează pe ecran un tablou unidimensional ce conţine, în ordinea în care au fost citite, numerele de pe a doua linie a fişierului bac.txt care au cel puţin k divizori.
	int v[100], d = 0;
	citireVector(v, d);
	cout << "Introduceti k: " << endl;
	int k;
	cin >> k;
	afisareElementeCareAuCelPutinKDivizori(v, d, k);
}
void sol33() {
	//Scrieţi un program C/C++ care citeşte de la tastatură un număr natural k (k<50) precum şi numerele din fişierul bac.txt şi afişează pe ecran, cu câte un spaţiu între ele, toate numerele de pe a doua linie a fişierului care sunt puteri ale lui k.Un număr natural x este putere a lui k dacă există un număr natural y astfel încât x = k^y. Dacă nu există un asemenea număr pe a doua linie a fişierului, se afişează pe ecran mesajul NU.
	int v[100], d = 0;
	citireVector(v, d);
	cout << "Introduceti k: " << endl;
	int k;
	cin >> k;
	afisareNumereCareSuntPuteriALuiK(v, d, k);
}
void sol34() {
	//Scrieţi programul C/C++ care citeşte de la tastatură un număr natural n (0<n<25), apoi un şir de n numere naturale nenule cu cel mult 9 cifre fiecare şi care afişează pe ecran, separate prin câte un spaţiu, numerele din şir care au suma cifrelor maximă, folosind apeluri utile ale subprogramului cif
	int v[100], d = 0;
	citireVector(v, d);
	afisareElementeCareAuSumaMaximaDeCifreDinVecor(v, d);
}
void sol35() {
	//Fişierul text bac.in conţine pe prima linie un număr natural n (0<n<5000), iar pe a doua linie, separate prin câte un spaţiu, n numere naturale, formate din cel mult 4 cifre fiecare. Scrieţi un program C / C++ care determină şi scrie în fişierul bac.out toate numerele de pe a doua linie a fişierului care apar o singură dată pe această linie.Numerele determinate se vor afişa în ordinea crescătoare a valorilor lor, separate prin câte un spaţiu.
	int v[100], d = 0;
	citireVector(v, d);
	afisareCrescatoareElementeCareAparDoarOdata(v, d);
}
void sol36() {
	//Scrieţi un program C/C++ care citeşte de la tastatură trei numere naturale nenule a, b şi n, cu cel mult 3 cifre fiecare şi care afişează pe ecran toţi divizorii lui n din intervalul închis determinat de a şi b folosind apeluri utile ale subprogramului divxy.Intervalul închis determinat de a şi b este[a, b] dacă a < b sau[b, a] dacă b≤a.Numerele afişate sunt separate prin câte un spaţiu.Dacă nu există niciun astfel de număr se afişează mesajul NU EXISTA
	cout << "Introduceti a: " << endl;
	int a;
	cin >> a;
	cout << "Introduceti b: " << endl;
	int b;
	cin >> b;
	cout << "Introduceti n: " << endl;
	int n;
	cin >> n;
	aifsareDivizoriiLuiNDinIntevalulAB(a, b, n);
}
void sol37() {
	//Fişierul bac.in conţine pe prima linie un număr natural n (0<n<5000), iar pe a doua linie, separate prin câte un spaţiu, n numere naturale, formate din cel mult 4 cifre fiecare. Scrieţi un program C / C++ care determină şi scrie în fişierul bac.out, toate numerele, citite de pe a doua linie a fişierului bac.in, care apar de cel puţin două ori.Numerele determinate se vor scrie în ordine crescătoare, pe aceeaşi linie, separate prin câte un spaţiu.
	int v[100], d = 0;
	citireVector(v, d);
	afisareCrescatoareElementeCareAparDeCelPutin2Ori(v, d);
}
void sol38() {
	//Fişierul text date.in conţine pe prima linie un număr natural nenul n (n≤100), iar pe a doua linie n numere naturale nenule, separate prin câte un spaţiu, fiecare număr având maximum 4 cifre.Scrieţi un program C / C++ care citeşte toate numerele din fişierul text date.in, construieşte în memorie un tablou unidimensional a, cu cele n elemente din fişier şi afişează pe ecran perechile(ai, aj), 1≤i < j≤n, cu proprietatea că elementele fiecăreia dintre aceste perechi au aceeaşi paritate.Fiecare pereche se va afişa pe câte o linie a ecranului, elementele perechii fiind separate prin câte un spaţiu.În cazul în care nu există nicio pereche, se va afişa valoarea 0.
	int v[100], d = 0;
	citireVector(v, d);
	afisarePerechiCuAceeasiParitate(v, d);
}
void sol39() {
	//Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n de minimum două şi maximum 8 cifre şi afişează pe ecran un număr palindrom cu valoarea cea mai apropiată de valoarea lui n citită.În cazul în care există două astfel de numere, se va afişa cel mai mic dintre ele.Se vor folosi apeluri utile ale subprogramului inv. Spunem că un număr natural x este palindrom dacă numărul format din cifrele lui x considerate de la stânga către dreapta este acelaşi cu numărul format din cifrele lui x considerate de la dreapta către stânga.
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n;
	int pal = celMaiApropiatPalindrom(n);
	cout << pal << endl;
}
void sol40(){
	//Scrieţi un program C/C++ care determină, folosind apeluri utile ale suprogramului primul, cel mai mare număr „aproape prim” de pe linia a doua a fişierului NUMERE.IN.În cazul în care există un astfel de număr se afişează pe ecran mesajul DA, urmat de numărul determinat, iar în caz contrar mesajul NU.
	int v[100], d = 0;
	citireVector(v, d);
	int max = celMaiMareElementAproapePrim(v, d);
}
void sol41() {
	//Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale, n şi m (1≤n≤100 şi m≤n), şi apoi un şir de n numere reale distincte.Folosind apeluri utile ale subprogramului ordonare, programul afişează pe prima linie a ecranului, cele mai mari m elemente din şirul citit(în ordine crescătoare a valorilor lor), iar pe a doua linie de ecran, cele mai mici m elemente din şir(în ordine descrescătoare a valorilor lor).Numerele afişate pe aceeaşi linie vor fi separate prin câte un spaţiu.
	int v[100], d = 0;
	citireVector(v, d);
	cout << "Introduceti m: " << endl;
	int m;
	cin >> m;
	afisareCeleMaiMariMElemente(v, d, m);
}
void sol42() {
	//Scrieţi definiţia completă a funcţiei f, care primeşte prin intermediul parametrului n un număr natural nenul(2≤n≤200), iar prin intermediul parametrului a un tablou unidimensional care conţine n valori întregi, fiecare dintre aceste valori întregi având cel mult patru cifre.Funcţia returnează valoarea 1 dacă elementele tabloului formează un şir crescător, valoarea 2 dacă elementele tabloului formează un şir descrescător, valoarea 0 dacă elementele tabloului formează un şir constant şi valoarea - 1 în rest.
	int v[100], d = 0;
	citireVector(v, d);
	int a = cumEsteOrdonatSirul(v, d);
	cout << a << endl;
}
void sol43() {
	//Fişierul text număr.txt conţine pe prima linie o valoare naturală n cu exact 9 cifre nenule distincte. Scrieţi un program eficient din punctul de vedere al timpului de executare care citeşte din fişier numărul n şi afişează pe ecran cea mai mică valoare m formată din exact aceleaşi cifre ca şi n, astfel încât m > n.În cazul în care nu există o astfel de valoare, programul va afişa pe ecran mesajul Nu exista.
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n;
	int nrf = celMaiMicNumarDinCifreleLuiN(n);
	cout << nrf << endl;
}
void sol44() {
	//Funcţia f primeşte prin intermediul parametrului n un număr natural nenul (2≤n≤200), iar prin intermediul parametrului a un tablou unidimensional care conţine n valori întregi nenule (fiecare dintre aceste valori întregi având cel mult patru cifre). Funcţia returnează valoarea - 1 dacă numărul de valori negative din tabloul a este strict mai mare decât numărul de valori pozitive din tablou, valoarea 0 dacă numărul de valori negative din a este egal cu numărul de valori pozitive din tablou şi valoarea 1 dacă numărul de valori pozitive din tabloul a este strict mai mare decât numărul de valori negative din a. Scrieţi definiţia completă a funcţiei f.
	int v[100], d = 0;
	citireVector(v, d);
	int a = cumEsteRaportulDeElementePozitiveSauNegative(v, d);
	cout << a << endl;
}
void sol45() {
	//Scrieţi programul C / C++ care citeşte numerele din fişier şi afişează, pe ecran, doar numerele pare din cele două şiruri, ordonate crescător.Programul nu va afişa nimic dacă nu există numere pare în cele două şiruri.Alegeţi o metodă de rezolvare eficientă ca timp de executare.
	int v1[100], d1 = 0;
	citireVector(v1, d1);
	int v2[100], d2 = 0;
	citireVector(v2, d2);
	afisareCrescatorElementePareCareExsistaInAmbiiVectori(v1, d1, v2, d2);
}
void sol46() {
	//În fişierul numere.txt sunt memorate pe mai multe linii, numere întregi (cel mult 100), numerele de pe aceeaşi linie fiind despărţite prin câte un spaţiu, fiecare număr având cel mult 9 cifre.Să se determine cele mai mici două valori având exact două cifre fiecare, memorate în fişier şi să se afişeze pe ecran aceste valori, despărţite printr - un spaţiu.Dacă în fişier nu se află două astfel de valori, pe ecran se va afişa valoarea 0.
	int v[100], d = 0;
	citireVector(v, d);
	afisareCeleMaiMiciDouaElementeCu2Cifre(v, d);
}
void sol47() {
	//Subprogramul sum3 primeşte prin parametrul x un tablou unidimensional, cu cel mult 100 de elemente, numere întregi cu cel mult 4 cifre fiecare, iar prin parametrul n un număr natural ce reprezintă numărul efectiv de elemente ale tabloului x(n≤100).Scrieţi definiţia completă a subprogramului sum3 care returnează suma elementelor tabloului care sunt divizibile cu 3. Dacă tabloul nu conţine nicio valoare divizibilă cu 3, subprogramul va returna 0.
	int v[100], d = 0;
	citireVector(v, d);
	int s = sumaElementeDivizibileCu3(v, d);
}
void sol48() {
	//Fişierul text numere.in conţine pe prima linie un număr natural n (0<n<1000), iar pe a doua linie n numere naturale cu cel mult 9 cifre fiecare, despărţite prin câte un spaţiu. Scrieţi un program C / C++ care citeşte toate numerele din fişier şi afişează pe ecran, separate prin câte un spaţiu, numerele de pe a doua linie a fişierului, care încep şi se termină cu aceeaşi cifră.
	int v[100], d = 0;
	citireVector(v, d);
	afisareElementeCuPrimaSiUltimaCifraEgala(v, d);
}
void sol49() {
	//)Scrieţi programul C/C++ care citeşte de la tastatură un număr natural n (0<n<100), apoi n numere naturale(cu cel mult 4 cifre fiecare).Programul determină, folosind apeluri utile ale subprogramului sum, pentru fiecare număr natural citit, suma divizorilor săi proprii şi afişează pe ecran sumele determinate, în ordinea crescătoare a valorilor lor, separate prin câte un spaţiu.
	int v[100], d = 0;
	citireVector(v, d);
	afisareCrescatoareSumaDivizorilorElementelor(v, d);
}
void sol50() {
	//Pe prima linie a fişierului bac.in se află un număr natural nenul n (n≤15000), iar pe a doua linie a fişierului se află un şir de n numere naturale, despărţite prin câte un spaţiu, fiecare număr fiind format din cel mult 4 cifre. Scrieţi un program C / C++ care citeşte numerele din fişier şi afişează pe ecran, folosind apeluri utile ale subprogramului cifra, cel mai mare număr care se poate forma cu ultimele cifre pare ale fiecărui element, dacă acestea există.Alegeţi o metodă de rezolvare eficientă ca timp de executare.Dacă toate numerele de pe a doua linie a fişierului au numai cifre impare, programul va afişa mesajul NU EXISTA.
	int v[100], d = 0;
	citireVector(v, d);
	int nr = celMaiMareNumarDinUltimeleCifrePareAleFiecaruiElement(v, d);
}