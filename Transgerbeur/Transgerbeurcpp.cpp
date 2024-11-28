#include <iostream>
#include <iomanip> 

using namespace std;

enum Eetat { vide, palette, rouleau };

struct Spalette
{
	int poids;
	char ref[20];
};

struct Srouleau
{
	float longueur;
	int num;
};


union UcontenuCasier
{
	Spalette paletteCasier;
	Srouleau rouleauCasier;
};

struct Scasier
{
	int px;
	int py;
	Eetat etat;
	UcontenuCasier contCasier;
};


int main()
{
	Scasier tab_ensebleCasier[9];
	Srouleau ro1;
	Spalette pa1;
	pa1.poids = 100;
	strcpy_s(pa1.ref, "frmdlyondec");
	ro1.longueur = 19.3;
	ro1.num = 15;
	Eetat etatC1;
	etatC1 = vide;
	UcontenuCasier cont;
	cont.paletteCasier = pa1;
	cont.rouleauCasier = ro1;
	Scasier c1;
	c1.contCasier.paletteCasier=pa1;
	c1.etat = palette ;
	c1.px = 2;
	c1.py = 3;
	Scasier c2;
	c2.etat = palette;
	tab_ensebleCasier[0] = c1;
	tab_ensebleCasier[2] = c2;
}