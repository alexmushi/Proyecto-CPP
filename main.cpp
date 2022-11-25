#include "luchador.h"
#include "enemigo.h"
#include<iostream>
using namespace std;

int main(){

	Caballero parzival("Parzival");
	Curandero zenyatta("Zenyatta");
	Alquimista pepe("pepe pociones");

	Enemigo enem(50, 10)

	cout << parzival.getNombre() << endl;
	cout << zenyatta.getNombre() << endl;
	cout << pepe.getNombre() << endl;

	enem.atk(parzival)
	parzival.crit(enem)
	enem.atk(zenyatta)
	zenyatta.curarMax()
	pepe.masPociones()

}
