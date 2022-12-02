/*
 * Proyecto Juego
 * A01705550
 * 2/12/2022
 */
#ifndef CABALLERO_H
#define CABALLERO_H

#include "luchador.h"
#include "enemigo.h"

//clase caballero, hija de luchador
class Caballero: public Luchador{

	public:
		Caballero(string nom): Luchador(100, 10, 50, nom){}

//habilidad especial: doble dano
		void crit(Enemigo &b){
			b.menosVida(getAtk() * 2);
		}

//atacar a un enemigo
		void atacar(Enemigo &b){
			b.menosVida(getAtk());
		}

};

#endif
