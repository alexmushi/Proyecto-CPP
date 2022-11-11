#include <iostream>
#include <math.h>
#include"clasesproyecto.h"
#define CONSGRAV 0.0000000000667428
using namespace std;


void menu(){

    cout << "Menu:\n";
    cout << "1. Calculadora de caida libre \n";
    cout << "2. Calculadora de fuerza gravitacional \n";
    cout << "3. Calculadora de velocidad\n";
    cout << "4. Salir \n";
}

int main(){
    menu();
    int menu;
    cin >> menu;
    switch(menu){
        case 1:
            cout << "1. Sacar velocidad final con altura\n";
            cout << "2. Sacar velocidad final con tiempo\n";
            cout << "3. Sacar altura con velocidad final\n";
            cout << "4. Sacar altura con tiempo\n";
            cout << "5. Sacar tiempo con velocidad final\n";
            cout << "6. Sacar tiempo con altura final\n";
            int opcioncl;
            cin >> opcioncl;
            switch(opcioncl){
                case 1:
                    cout << "Altura:";
                    double respuestavh;
                    cin >> respuestavh;
                    caidaLibre velocidadh;
                    cout << velocidadh.sacarVelocidadConAltura(respuestavh);
                    break;
                case 2:
                    cout << "Tiempo:";
                    double respuestavt;
                    cin >> respuestavt;
                    caidaLibre velocidadt;
                    cout << velocidadt.sacarVelocidadConTiempo(respuestavt);
                    break;
                case 3:
                    cout << "Velocidad final:";
                    double respuestahv;
                    cin >> respuestahv;
                    caidaLibre alturav;
                    cout << alturav.sacarAlturaConVelocidad(respuestahv);
                    break;
                case 4:
                    cout << "Tiempo:";
                    double respuestaht;
                    cin >> respuestaht;
                    caidaLibre alturat;
                    cout << alturat.sacarAlturaConTiempo(respuestaht);
                    break;
                case 5:
                    cout << "Velocidad final:";
                    double respuestatv;
                    cin >> respuestatv;
                    caidaLibre tiempov;
                    cout << tiempov.sacarTiempoConVelocidad(respuestatv);
                    break;
                case 6:
                    cout << "Altura:";
                    double respuestath;
                    cin >> respuestath;
                    caidaLibre tiempoh;
                    cout << tiempoh.sacarTiempoConAltura(respuestath);
                    break;
            }
        case 2:
            cout << "1. Sacar masa\n";
            cout << "2. Sacar distancia\n";
            cout << "3. Sacar fuerza gravitacional\n";
            int opciongrav;
            cin >> opciongrav;
            switch(opciongrav){
                case 1:
                    double mm;
                    cout << "Masa 1";
                    cin >> mm;
                    double rm;
                    cout << "Distancia";
                    cin >> rm;
                    double fm;
                    cout << "Fuerza gravitacional";
                    cin >> fm;
                    fuerzaGrav masa;
                    cout << masa.sacarMasa(mm,rm,fm);
                    break;
                case 2:
                    double m1d;
                    cout << "Masa 1";
                    cin >> m1d;
                    double m2d;
                    cout << "Masa 2";
                    cin >> m2d;
                    double fd;
                    cout << "Fuerza gravitacional";
                    cin >> fd;
                    fuerzaGrav distancia;
                    cout << distancia.sacarDistancia(m1d,m2d,fd);
                    break;
                case 3:
                    double m1f;
                    cout << "Masa 1";
                    cin >> m1f;
                    double m2f;
                    cout << "Masa 2";
                    cin >> m2f;
                    double rf;
                    cout << "Distancia";
                    cin >> rf;
                    fuerzaGrav fuerza;
                    cout << fuerza.sacarFuerza(m1f,m2f,rf);
                    break;
            }
//     //////
        case 3:
            cout << "1. Sacar velocidad\n";
            cout << "2. Sacar distancia\n";
            cout << "3. Sacar tiempo\n";
            int opcionvelocidad;
            cin >> opcionvelocidad;
            switch(opcionvelocidad){
                case 1:
                    double dv;
                    cout << "Distancia";
                    cin >> dv;
                    double tv;
                    cout << "Tiempo";
                    cin >> tv;
                    velocidad veloc;
                    cout << veloc.sacarVelocidad(dv,tv);
                    break;
                case 2:
                    double vd;
                    cout << "Velocidad";
                    cin >> vd;
                    double td;
                    cout << "Tiempo";
                    cin >> td;
                    velocidad distancia;
                    cout << distancia.sacarDistancia(vd,td);
                    break;
                case 3:
                    double dt;
                    cout << "Distancia";
                    cin >> dt;
                    double vt;
                    cout << "Velocidad";
                    cin >> vt;
                    velocidad tiempo;
                    cout << tiempo.sacarTiempo(dt,vt);
                    break;
            }
    }
}

