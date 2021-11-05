#include<iostream>

using namespace std;

class cuentabancaria{
	public: //constructor
	cuentabancaria(int,string,int);
		
	void getsaldo(); //metodos
	void getnumerocuenta();
	void getnombretitular();
	void depositar(importedeposito);
	void retirar(importeretiro);
	
	
	private: //atributos
	int	numerocuenta;
	string nombretitular;
	int saldo;	
			
};

//iniciando constructor, para iniciar los atributos
cuentabancaria::cuentabancaria(int _numerocuenta,string _nombretitular,int _saldo){
	numerocuenta = _numerocuenta;
	nombretitular = _nombretitular;
	saldo = _saldo;	
}

//metodos 1
void cuentabancaria::getsaldo(){
	
}	
//metodo 2
void cuentabancaria::getnumerocuenta(){
	
}
//metodo 3
void cuentabancaria::getnombretitular(){
	
}
void 




int main() { 



return 0;
}
