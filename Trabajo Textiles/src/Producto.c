/*
 * Producto.c
 *
 *  Created on: May 11, 2021
 *      Author: facu
 */

#include "Producto.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "utn2.h"


Producto* prod_new(void)
{
	return (Producto*)malloc(sizeof(Producto));
}


Producto* prod_newParam(int idProducto,char* descripcion, char* nacionalidad, char* tipo)
{
	Producto auxProducto = prod_new(auxProducto);

	if(auxProducto != NULL)
	{

	}

	return 0;
}

int prod_delete(Producto* this)
{
	return 0;
}

int prod_setIdProducto(Producto* this, int idProducto)
{
	int retorno = -1;

	if(this != NULL && pro_isValidId(idProducto)==0)
	{

	}
	return retorno;
}

int prod_isValidId(int idProducto)
{
	int retorno = -1;

	if(idProducto >=0)
	{
		retorno = 0;
	}
	return retorno;
}

int prod_getIdProducto(Producto* this,int* flagError)
{
	*flagError = -1;
	int auxId;

	if(this != NULL && flagError != NULL)
	{
		auxId = this->idProducto;
		*flagError = 0;
		return auxId;
	}

	return *flagError;
}

int prod_setDescripcion(Producto* this, char* descripcion)
{
	int retorno = -1;
	char* auxDescripcion = NULL;

	if(this != NULL && descripcion != NULL)
	{
		strcpy(auxDescripcion,this->descripcion);
		retorno = 0;
	}
	return retorno;
}











