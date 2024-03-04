#include <iostream>
#include <string>
#include <cstdlib>  // Función rand().
#include <ctime>    // Función time() para generar una nueva seed aleatoria.
using namespace std;

#define log(x) cout << x << endl;

class Jugador{
    /*
        Agrega propiedades para guardar la vida(número entero), ataque(número entero) y nombre del jugador.
        Agrega una propiedad para guardar el jugador que lo atacó por última vez.
    */
   public: 
int vida;
int ataque;
string nombre;
    
    Jugador(); 
    Jugador(int hp, int attack, string name/* agrega parámetros para asignar hp, ataque y nombre */); 
    
    void atacar(int atack/* agregar parámetros para atacar a otro jugador*/); 
};

int main()
{
    srand(time(0));  // Seed para generar valores aleatorios

    Jugador p1;
    p1.vida = 100;
    p1.ataque = 5;
    p1.nombre = "Pablo";

    Jugador p2 (150, 5, "mireya");

    
    /*
        Crear al menos 2 jugadores con diferentes nombres, vida y ataque. 
        Los jugadores deben atacarse entre sí, tomando turnos, hasta que uno pierda toda su vida.
        En cuanto la vida del jugador se reduzca a 0 el programa muestra al ganador y se termina. 
        No importa quien ataca primero.
    */

    return 0;
}

Jugador::Jugador(){
    vida= 100;
    ataque= 5;
    nombre = "no definido";
    /*
        Asignar 100 a hp y 5 a attack como valores default.
        Asignar 'No definido' al nombre como default.
    */
}

Jugador::Jugador(int hp, int attack, string name/* Agrega parámetros para asignar hp, ataque y nombre*/){

    vida= hp;
    ataque= attack;
    nombre= name;
    if(hp>200){
      hp=200;
       if (hp<0){
        hp= 0;
       }

    }

    if (attack>20){
        attack=20;
        if(attack<0){
            attack=0;
        }
    }

   /* 
        Asignar los parámetros recibidos a las propiedades del objeto.
        No se pueden asignar valores negativos a hp y attack.
        Máximo 200 hp y 20 attack
    */
}

void Jugador::atacar(Jugador jugador){

    if (jugador = p2){

        cout << 
    }
    





    /*
        El jugador atacado(el que recibes como parámetro) pierde HP igual al ataque del jugador que ataca.
        Existe un 20% de probabilidad de que el ataque falle y no haga daño.
        Se debe mostrar lo que pasó en cada ataque:
        nombre1 atacó a nombre2 e hizo 5 de daño, vida restante de nombre2 = 95
        nombre2 atacó a nombre1 pero fallo, vida restante de nombre1 = 100
        El jugador que atacó debe quedar guardar en la propiedad atacadoPor del jugador atacado.
    */
    /*
    Nota:
        int x = rand() % 1000; asigna un valor aleatorio entre 0 y 999 a x;
        Puedes usar esto para la probabilidad del ataque.
    */
}