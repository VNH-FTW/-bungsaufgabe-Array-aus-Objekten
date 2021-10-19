#include <iostream>
using namespace std;

class cFunkMast
{
private:
	int anzahlAntennen;
	double reichweite;
	double hoehe;
	double geoBreite;
	double geoLaenge;
public:
	cFunkMast(int = 0, double = 0.0, double = 0.0, double = 49.7, double = 8.3);	
	void eingabe();
	void ausgabe();
	~cFunkMast();
};

