#define GRAV 9.81

class caidaLibre{
    private:
        double altura;
        double velocidad;
        double tiempo;
    public:
//Formulas de caida libre
//velocidad
        double sacarVelocidadConAltura(double altura){
            tiempo = pow((altura / (0.5 * GRAV)),0.5);
            return (tiempo * GRAV);
        }
        double sacarVelocidadConTiempo(double tiempo){
            return (tiempo * GRAV);
        }
//altura
        double sacarAlturaConVelocidad(double velocidad){
            tiempo = velocidad / GRAV;
            return (0.5 * GRAV * (pow(tiempo,2)));
        }
        double sacarAlturaConTiempo(double tiempo){
            return (0.5 * GRAV * (pow(tiempo,2)));
        }
//tiempo
        double sacarTiempoConAltura(double altura){
            return (pow(((altura * 2) / GRAV),0.5));
        }
        double sacarTiempoConVelocidad(double velocidad){
            return (velocidad / GRAV);
        }
};

class fuerzaGrav{
    private:
        double masa1;
        double masa2;
        double distancia;
        double gravedad;
    public:
//F = (GMm) / R^2 , donde
//F = Fuerza gravitacional
//G = Constante gravitacional
//M, m = Masa 1 y 2
//R = Distancia
//masa
    double sacarMasa(double m,double r,double f){
        return (((pow(r,2)) * f) / (m * CONSGRAV));
    };
//distancia
    double sacarDistancia(double m1, double m2, double f){
        return (pow(((CONSGRAV * m1 * m2) / f),0.5));
    };
//fuerza
    double sacarFuerza(double m1, double m2, double r){
        return ((CONSGRAV * m1 * m2) / (pow(r,2)));
    };
};

class velocidad{
    private:
        double velocidad;
        double distancia;
        double tiempo;
    public:
//Velocidad = distancia / tiempo
//Velocidad
        double sacarVelocidad(double d,double t){
            return (d / t);
        };
//Distancia
        double sacarDistancia(double v, double t){
            return (v * t);
        };
//Tiempo
        double sacarTiempo(double d, double v){
            return (d / v);
        };


};
