#pragma once

#include <iostream>

using namespace std;

template<typename T>

class Colas
{
private:
	T* cola;
	int primero;
	int ultimo;
	int tope;
	int tamano;
public:
	Colas(int tamano);
	~Colas();
	void push(T dato);
	T pop();
	int getTope();
	bool isEmpty();
	bool isFull();
	void imprimir();
};

template<typename T>
inline Colas<T>::Colas(int _tamano)
{
	tamano = _tamano;
	cola = new T[tamano];
	primero = 0;
	ultimo = -1;

}

template<typename T>
inline Colas<T>::~Colas()
{
	delete[] cola;
}

template<typename T>
inline void Colas<T>::push(T dato)
{
	if (isFull())
	{
		cout << "Cola llena" << endl;
	}
	else
	{
		ultimo++;
		cola[ultimo] = dato;
	}

}

template<typename T>
inline T Colas<T>::pop()
{
	if (isEmpty())
	{
		cout << "Cola vacia" << endl;
	}
	else
	{
		T dato = cola[primero];
		//primero++;
		ultimo--;
		for (int i = 0; i <= ultimo; i++) {
			cola[i] = cola[i + 1];
		}

		return dato;
	}
	return T();
}

template<typename T>
inline int Colas<T>::getTope()
{
	return ultimo;
}

template<typename T>
inline bool Colas<T>::isEmpty()
{

	return false;
}

template<typename T>
inline bool Colas<T>::isFull()
{
	if (ultimo == tamano - 1)
	{
		return true;
	}
	return false;
}

template<typename T>
inline void Colas<T>::imprimir()
{
	for (int i = 0; i <= ultimo; i++)
	{
		cout << cola[i] << " ";
	}
	cout << endl;
}
