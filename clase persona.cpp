#include<iostream>

using namespace std;

class persona{
	private: //atributos
	string nombres;
	string apellidos;
	int anionacimiento;
	

	public: //metodos
	persona(string,string,int); //constructor
	void nombreCompleto();
	void edad();
};

//inicializacion constructor
persona::persona(string _nombres, string _apellidos, int _anio){
	nombres = _nombres;
	apellidos = _apellidos;
	anionacimiento = _anio;
	
}
 //metodo 1 nombre completo
void persona::nombreCompleto(){
cout <<nombres << " " << apellidos << endl;	
}

//metodo 2 edad
void persona::edad(){
	
int	anioactual = 2021;
int naci;
	naci = anioactual - anionacimiento;
	cout << " y su edad es: " << naci << endl;
}

int main() { 

 cout<< "Rene Francisco Rauda Rivera RR105016  \n";
persona p1 = persona ("francisco","Rauda",1997);

p1.nombreCompleto();
p1.edad();



return 0;
}
