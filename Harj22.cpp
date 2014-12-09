// HARJOITUS 22
// Harri Vastamäki
// IIOS14S1

#include <iostream>
using namespace std;

struct HENKREK 
{
	char etunimi[10];
	float koulumatka;
	int hattu;
};

int Valikko();
void TulostaHenkilo(HENKREK);
void TulostaKaikkiHenkilot(HENKREK[], int);
void LisaaHenkilo(HENKREK[], int *lkm);

void main() 
{
	HENKREK henkilot[10];
	int henkilolkm = 0;
	int valinta = 1;

	while (valinta != 0) {

		valinta = Valikko();

		if (valinta == 0) {
			cout << "Lopetus!" << endl;
			break;
		}
		else if (valinta == 1) {

			LisaaHenkilo(henkilot, &henkilolkm);

		}
		else if (valinta == 2) {
			TulostaKaikkiHenkilot(henkilot, henkilolkm);
			cout << endl;
		}
		else if (valinta == 3) {
			TulostaHenkilo(henkilot[0]);
		}
		else {
			cout << "Valinta ei mahdollinen!" << endl;
			henkilolkm--;
		}
	}
}

int Valikko() 
{
	int valinta;
		cout << "VALIKKO" << endl;
		cout << "0. Lopeta" << endl;
		cout << "1. Lisaa henkilo" << endl;
		cout << "2. Nayta kaikki henkilot" << endl;
		cout << "3. Nayta joku henkilo" << endl;
	cin >> valinta;
	return valinta;
}

void TulostaHenkilo(HENKREK henkilo) {
	cout << endl << henkilo.etunimi << " " << henkilo.koulumatka << " " << henkilo.hattu << endl;
}

void TulostaKaikkiHenkilot(HENKREK kaikkihenkilot[], int henkilolkm) {
	for (int ind = 0; ind < henkilolkm; ind++) {
		cout << endl << kaikkihenkilot[ind].etunimi << " " << kaikkihenkilot[ind].koulumatka << " " << kaikkihenkilot[ind].hattu << endl;
	}
}
void LisaaHenkilo(HENKREK henkilo[], int *lkm) {
	cout << "Anna etunimi: ";
	cin >> henkilo[*lkm].etunimi;
	cout << "Anna koulumatka: ";
	cin >> henkilo[*lkm].koulumatka;
	cout << "Anna hatun koko: ";
	cin>> henkilo[*lkm].hattu;
	(*lkm)++;
	cout << endl;
}