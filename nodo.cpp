#include "nodo.h"

//ConsDefEC
nodo <L> :: nodo()
{
	dato=NULL;
	siguiente=NULL;
}
//Parametros

template<typename L>
nodo <L> :: nodo(L dato)
{
	dato=dato;
	siguiente=NULL;
}

