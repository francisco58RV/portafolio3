#include<iostream>

using namespace std;

class cuentabancaria{
	private: //atributos
	int numerocuenta;
	string nombretitular;
	int saldo;
	
	public: //metodos
	cuentabancaria(int,string,int); //constructor
	void getsaldo();
	void getnumerocuenta();
	void getnombretitular();
	void depositar();
	void retirar();	
};

//inicializacion constructor
cuentabancaria::cuentabancaria(int _numerocuenta, string _nombretitular, int _saldo){
	numerocuenta = _numerocuenta;
	nombretitular = _nombretitular;
	saldo = _saldo;
	
}
 //metodo 1 saldo
void cuentabancaria::getsaldo(){
		cout << "saldo :"<<saldo << endl;
}

//metodo 2 numerocuenta
void cuentabancaria::getnumerocuenta(){
	cout << "numero de la cuenta :" << numerocuenta<< endl;
}

//metodo 3 nombretitular
void cuentabancaria::getnombretitular(){
	cout <<"nombre del titular : " << nombretitular<< endl;
}

//metodo 4 depositar
void cuentabancaria::depositar(){
	int importedeposito = 100;
	 int total = importedeposito + saldo;
	 
	 cout << "deposito de 100: "<<"total: " <<total << endl;
	 
}

//metodo 5 retirar
void cuentabancaria::retirar(){
	int importedeposito = 100;
	int total = saldo - importedeposito;
	cout << "retiro de 200: "<<"total: " <<total << endl;
}
int main() { 

cout <<"Rene Francisco Rauda Rivera RR105016 \n";
cuentabancaria b1 = cuentabancaria (32659,"Rene Francisco",400);

b1.getsaldo();
b1.getnumerocuenta();
b1.getnombretitular();
b1.depositar();
b1.retirar();


return 0;
}
