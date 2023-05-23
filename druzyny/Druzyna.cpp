#include "Druzyna.h"

Druzyna::Druzyna(string n, int w, int r, int p, int g, int s) {

	nazwa = n;
	wygrane = w;
	remisy = r;
	przegrane = p;
	gole = g;
	stracone = s;

}

void Druzyna::wyswietl() {

	cout << nazwa <<"\t";
	cout << wygrane << "\t";
	cout << remisy << "\t";
	cout << przegrane << "\t";
	cout << gole << "\t";
	cout << stracone << "\t";
	cout << endl;


}

int Druzyna::punkty() {

	return (wygrane * 3) + remisy;

}
