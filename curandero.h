/*
 * Proyecto Juego
 * A01705550
 * 2/12/2022
 */
#ifndef CURANDERO_H
#define CURANDERO_H

#include "luchador.h"
#include "enemigo.h"

//clase alquimista, hija de luchador
class Curandero: public Luchador{

	public:
		Curandero(string nom):Luchador(100, 10, 100, nom){}

//habilidad especial: curarse a 100 de hp
		void curarMax(){
		    if(getMana() >= 25){
                setHp(100);
                setMana(getMana() - 25);
            }
		}

//atacar a un enemigo
		void atacar(Enemigo &b){
			b.menosVida(getAtk());
		}
};

#endif
