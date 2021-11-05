#include<iostream>

using namespace std;

class personaje{
	private: //atributos
	string nombre;
	int puntosvida;
	int golpe;
	int comida;
	
	public: //metodos
	personaje(string,int,int,int); //constructor
	void recibirgolpe();
	void estavivo();
	void getpuntosvida();
	void getnombre();
	void comer();
};

//inicializacion constructor
personaje::personaje(string _nombre, int _puntosvida,int _golpe, int _comida){
	nombre = _nombre;
	puntosvida = _puntosvida;
	golpe = _golpe;
	comida = _comida;
	
	
}
 //metodo 1 recibirgolpe
void personaje::recibirgolpe(){
	
	
	int totalpuntos = puntosvida - golpe;
	
	cout << "puntos despues de ataque: " << totalpuntos<< endl;
}

//metodo 2 estavivo
void personaje::estavivo(){
	
	 int totalpuntos = puntosvida - golpe;
	if (puntosvida > totalpuntos){
		cout << " esta vivo" << endl;
	}else{
		cout << "esta muerto" << endl;
	}
	
}

//metodo 3 getpuntosvida
void personaje::getpuntosvida(){
	
	cout << "puntos de vida: " <<puntosvida<< endl;
}

//metodo 4 getnombre
void personaje::getnombre(){
	cout << "nombre del personaje: " << nombre<< endl;
}

//metodo 5 comer
 void personaje::comer(){
	
	
	int total = puntosvida + comida;
	cout << "total con puntos ganados: "<< total << endl;
}

int main() { 
 cout << "Rene Francisco Rauda Rivera RR105016 \n";
personaje p1 = personaje ("onepunch",800,300,200);

p1.getnombre();
p1.getpuntosvida();
p1.recibirgolpe();
p1.estavivo();
p1.comer();



return 0;
}
