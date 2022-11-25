#ifndef luchador.h
#define luchador.h
#ifndef enemigo.h
#define enemigo.h
#include<iostream>
using namespace std;

class Luchador{

	private:
		int hp;
		int atk;
		string nombre;


	public:
		Luchador(int vida, int ataque, string nom){
			hp = vida;
			atk = ataque;
			nombre = nom;
		}

		int getHp(){
			return hp;
		}

		int getAtk(){
			return atk;
		}

		string getNombre(){
			return nombre;
		}

		void menosHp(int dmg){
            hp = hp - dmg;
        }

        void setHp(int num){
            hp = num;
        }

		void atk(int dmg, Enemigo &b){
			 b.menosHp(dmg);
		}

};

class Caballero: public Luchador{
    public:
		Caballero(string nom): Luchador(100, 10, nom){
		}

		void crit(Enemigo &b){
			b.menosHp(20);
		}
};

class Curandero: public Luchador{
    public:
		Curandero(string nom): Luchador(100, 10, nom){
		}

		void curarMax(){
			Curandero.setHp(100);
		}
};

class Alquimista: public Luchador{
    public:
		Alquimista(string nom): Luchador(100, 10, nom){
		}

		void masPociones(){
			cout << "worales tienes mas pociones";
		}
};



#endif
#endif
