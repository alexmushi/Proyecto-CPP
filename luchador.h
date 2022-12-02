/*
 * Proyecto Juego
 * A01705550
 * 2/12/2022
 */
#ifndef LUCHADOR_H
#define LUCHADOR_H

#include<iostream>

using namespace std;

class Luchador{

	private:
		int hp;
		int atk;
		int mana;
		string nombre;

	public:
		Luchador(int vid, int atak, int man, string nom){
			hp = vid;
			atk = atak;
			mana = man;
			nombre = nom;
		}
//getters
		int getHp(){
			return hp;
		}

		int getAtk(){
			return atk;
		}

		int getMana(){
			return mana;
		}

		string getNom(){
			return nombre;
		}
//setters
        void setHp(int x){
			hp = x;
		}

		void setMana(int x){
			mana = x;
		}

		void menosVida(int x){
			hp = hp - x;

		}
//accion para subir su hp
		void curar(){
		    if(getMana() >= 10){
                setHp(getHp() + 10);
                setMana(getMana() - 10);
		    }
        }

};

#endif
