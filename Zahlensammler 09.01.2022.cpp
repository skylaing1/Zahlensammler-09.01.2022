#include <string>
#include <iostream>

using namespace std;

int main()
{
	bool stoppen = false;
	int kleinzahl;
	int groszahl;
	int neuezahl;
	int gesamtzahl = 0;

	cout << endl << "Geben sie eine Zahl ein : ";
	cin >> neuezahl;
	
	kleinzahl = neuezahl;
	groszahl = neuezahl;


	while (stoppen == false) {

	

		gesamtzahl = gesamtzahl + neuezahl;

		if (kleinzahl > neuezahl && neuezahl != 0) {
			kleinzahl = neuezahl;
		}
		
		if (groszahl < neuezahl && neuezahl != 0) {
			groszahl = neuezahl;
		}
		
		if (neuezahl == 0) {
			stoppen = true;
			cout << endl << "Die Gesamte Zahl: " << gesamtzahl << endl << "Die Groeste Zahl: " << groszahl << endl << "Die kleinste Zahl: " << kleinzahl;
		}
		cout << endl << "Geben sie eine Zahl ein : ";
		cin >> neuezahl;
	}
}

