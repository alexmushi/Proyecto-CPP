/*
 * Proyecto Juego
 * A01705550
 * 2/12/2022
 */
#include<iostream>

using namespace std;

#include "alquimista.h"
#include "caballero.h"
#include "curandero.h"
#include "enemigo.h"

int main(){

	Alquimista pepepo("Pepe pociones");
	Caballero parzival("Parzival");
	Curandero zenyatta("Zenyatta");
	Enemigo enemi(100, 10, "enemigo");

	parzival.atacar(enemi);
	enemi.atacar(parzival);
	pepepo.atacar(enemi);
	enemi.atacar(pepepo);
	enemi.atacar(pepepo);
	enemi.atacar(pepepo);
	enemi.atacar(zenyatta);
	enemi.atacar(zenyatta);
	enemi.atacar(zenyatta);
	zenyatta.curarMax();
	parzival.crit(enemi);
	pepepo.pociones();
	pepepo.curar();

	cout << parzival.getNom() << endl;
	cout << parzival.getHp() << endl;
	cout << pepepo.getNom() << endl;
	cout << pepepo.getHp() << endl;
	cout << zenyatta.getNom() << endl;
	cout << zenyatta.getHp() << endl;
	cout << enemi.getNom() << endl;
	cout << enemi.getHp();


}
