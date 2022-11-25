#ifndef enemigo.h
#define enemigo.h
#ifndef luchador.h
#define luchador.h
#include<iostream>
using namespace std;

class Enemigo{

	private:
		int hp;
		int atk;

	public:
		Enemigo(int vida, int ataque){
			hp = vida;
			atk = ataque;
		}

		int getHp(){
			return hp;
		}

		void menosHp(int dmg){
            hp = hp - dmg;
        }

		void atk(Luchador &b){
			 b.menosHp(atk);
		}


};

#endif
#endif
