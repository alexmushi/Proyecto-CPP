/*
 * Proyecto Juego
 * A01705550
 * 2/12/2022
 */
#ifndef ALQUIMISTA_H
#define ALQUIMISTA_H

#include "luchador.h"
#include "enemigo.h"

//clase alquimista, hija de luchador
class Alquimista: public Luchador{

	public:
		Alquimista(string nom): Luchador(100, 10, 75, nom){}

//habilidad especial: decir soy pepe pociones
		void pociones(){
			cout << "SOY PEPE POCIONES" << endl;
		}

//atacar a un enemigo
		void atacar(Enemigo &b){
			b.menosVida(getAtk());
		}

};

#endif
