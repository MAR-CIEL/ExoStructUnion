//d�claration des diff�rentes biblioth�que
#include <iostream>
#include <iomanip> 

//fonction permettant de se passer de std;
using namespace std;

//d�claration d'un �tat
enum Eetat { vide, palette, rouleau };

//d�claration des diff�rentes structure
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

//d�claration d'un union
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

//d�claration de la fonction principal
int main()
{
	//d�claration des variable a l'aide des diff�rente structure, union et �tat 
	//ces diff�rentes fonction remplace les fonction void et int et sont plus utile dans ce programme
	Scasier tab_ensebleCasier[9];
	Srouleau ro1;
	Spalette pa1;
	Eetat etatC1;
	UcontenuCasier cont;
	Scasier c1;
	Scasier c2;


	//itinialisation des diff�rentes variable des fonction pr�cedente 
	//ainsi que des variable d�clarer pr�c�demment
	pa1.poids = 100;
	strcpy_s(pa1.ref, "frmdlyondec");
	ro1.longueur = 19.3;
	ro1.num = 15;
	etatC1 = vide;
	cont.paletteCasier = pa1;
	cont.rouleauCasier = ro1;
	c1.contCasier.paletteCasier=pa1;
	c1.etat = palette ;
	c1.px = 2;
	c1.py = 3;
	c2.etat = palette;
	tab_ensebleCasier[0] = c1;
	tab_ensebleCasier[2] = c2;

	//utilisation de la fonction cout permettant d'afficher dans le terminal de d�bogage
	//ici on verra grace a la fonction sizeof les octet que occupe les diff�rentes variable 
	cout << sizeof(pa1.poids) << endl;
	cout << sizeof(strcpy_s(pa1.ref, "frmdlyondec")) << endl;
	cout << sizeof(ro1.longueur) << endl;
	cout << sizeof(ro1.num) << endl;
	cout << sizeof(etatC1) << endl;
	cout << sizeof(cont.paletteCasier) << endl;
	cout << sizeof(cont.rouleauCasier) << endl;
	cout << sizeof(c1.contCasier.paletteCasier) << endl;
	cout << sizeof(c1.etat) << endl;
	cout << sizeof(c1.px) << endl;
	cout << sizeof(c1.py) << endl;
	cout << sizeof(c2.etat) << endl;
}