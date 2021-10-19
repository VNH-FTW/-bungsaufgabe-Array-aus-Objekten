#include "cFunkMast.h"

cFunkMast::cFunkMast(int anzahlAntennen_in, double reichweite_in, double hoehe_in, double geoBreite_in, double geoLaenge_in)
{
	anzahlAntennen = anzahlAntennen_in;
	hoehe = hoehe_in;
	reichweite = reichweite_in;
	geoBreite = geoBreite_in;
	geoLaenge = geoLaenge_in;
}

void cFunkMast::eingabe() 
{
	cout << "Geben Sie die anzahl der Antennen an: ";
	cin >> anzahlAntennen;
	cout << "Geben Sie die Hoehe an: ";
	cin >> hoehe;
	cout << "Geben Sie die Reichweite an: ";
	cin >> reichweite;
	cout << "Geben sie die geo. Breite an: ";
	cin >> geoBreite;
	cout << "Geben Sie die geo. Laenge an:";
	cin >> geoLaenge;
}

void cFunkMast::ausgabe()
{
	if (anzahlAntennen == 0) {
		return;
	}
	else {
		cout << "Anzahl Antennen: " << anzahlAntennen << ", Hoehe: " << hoehe << ", Reichweite: " << reichweite << ", geo. Breite: " << geoBreite << ", geo. Laenge: " << geoLaenge << endl;
	}
}

cFunkMast::~cFunkMast()
{
}
