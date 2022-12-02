/*
 * Proyecto Juego
 * A01705550
 * 2/12/2022
 */
#ifndef ENEMIGO_H
#define ENEMIGO_H

#include<iostream>
#include "luchador.h"

using namespace std;

//clase enemigo, sin herencia
class Enemigo{

	private:
		int hp;
		int atk;
		string nombre;

	public:
		Enemigo(int vid, int atak, string nom){
			hp = vid;
			atk = atak;
			nombre = nom;
		}

//getters
		int getHp(){
			return hp;
		}

		int getAtk(){
			return atk;
		}

		string getNom(){
			return nombre;
		}

//setter para cuando le hacen daño
		void menosVida(int x){
			hp = hp - x;
		}

//atacar a un luchador
		void atacar(Luchador &p){
			p.menosVida(getAtk());
		}
};

#endif
