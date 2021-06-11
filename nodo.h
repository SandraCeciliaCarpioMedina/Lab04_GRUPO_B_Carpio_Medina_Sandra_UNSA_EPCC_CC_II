#ifndef NODE_H
#define NODE_H
#include <iostream>

using namespace std,

template <class L >

class nodo{
	public:
		nodo();
		nodo(L);
		
		nodo *siguiente;
		L dato;
		
		void print();
};
#endif
