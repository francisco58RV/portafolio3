#include<iostream>

using namespace std;

class francisco{
	
	public: // atributos
		int edad;
		string nombre;
	public: //metodos
	francisco(int,string); //constructor
	 void trabajar();
	 void comer();
	 
};
//inicializando constructor
francisco::francisco( int _edad, string _nombre){
	
	edad = _edad;
	nombre = _nombre;
}
 //metodos
 void francisco::trabajar(){
 	 cout<< nombre << "trabaja mucho " << endl;
 	
 }

//metodo 2
void francisco::comer(){
	cout<< nombre << "le gusta comer tacos y tiene"<< edad << endl;
	
}
int main() { 

//creando el objeto de la clase
//primero la clase y luego su nombre del objeto
// segundo llamar al constructor y pasar parametros
francisco p1 = francisco(19,"francisco");

p1.trabajar();
 
return 0;
}
