#include <iostream>
using namespace std;

#include "cFunkMast.h"

int main() {

	cFunkMast FunkMast[100];

	string funk_in;
	for (int i = 0; i < 100; i++) {
		cout << "Wollen Sie einen FunkMast hinzufügen? (Geben Sie >j< oder >n< ein)" << endl;
		cin >> funk_in;
		if (funk_in == "j") {
			FunkMast[i].eingabe();
		}
		else {
			break;
		}
	}

	for (int i = 0; i < 100; i++) {
		FunkMast[i].ausgabe();
	}

	return 0;
}