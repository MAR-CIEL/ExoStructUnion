#include <iostream>
#include <iomanip>
#define REF 

using namespace std;

struct Scasier
{
	int px;
	int py;
	Eetat etat;
	UcontenuCasier contCasier;
};

struct Spalette
{
	int poids;
	char ref[REF];
};

struct Srouleau
{
	float longueur;
	int num;
};

enum Eetat {vide, palette, rouleau};

union UcontenuCasier
{
	Spalette paletteCasier;
	Srouleau rouleauCasier;
};

int main()
{

}