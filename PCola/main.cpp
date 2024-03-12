#include <iostream>
#include "Colas.h"
using namespace std;



template <class T>
T sumar(T a, T b) {
	return a + b;
}

template <class T, class U>
class A {
public:
	T a;
	T b;
	U c;
	U d;
	A(T a, T b) : a(a), b(b) {}
	T sumar() {
		return a + b;
	}


};

int main()
{
	cout << "INICIANDO COLAS" << endl;
	cout << "\nCola entera:" << endl;
	Colas<int> cola(5);
	cola.push(78);
	cola.push(45);
	cola.push(68);
	cola.push(35);
	cola.push(21);


	cola.imprimir();

	int aux = cola.pop();

	cola.imprimir();
	cout << "\nCola Flotante:" << endl;
	Colas<float> colaflotante(6);
	colaflotante.push(6.2);
	colaflotante.push(78.5);
	colaflotante.push(75.4);
	colaflotante.push(25);
	colaflotante.push(4.2);
	colaflotante.push(86.3);


	colaflotante.imprimir();

	float aux1 = colaflotante.pop(); 

	colaflotante.imprimir();
	
	cout << "\nCola de Cadenas:" << endl;
	Colas<string> colacadena(5);
	colacadena.push(string("Juan"));
	colacadena.push(string("Mateo"));
	colacadena.push(string("Marcos"));
	colacadena.push(string("Lucas"));
	colacadena.push(string("Judas"));

	colacadena.imprimir();

	string aux2 = colacadena.pop();

	colacadena.imprimir();

	//cout << sumar<string>(string("Jose "), string("Luis")) << endl;
	//cout << sumar<int>(10, 23) << endl;
	return 0;
}