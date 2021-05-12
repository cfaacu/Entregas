/*
 * Producto.h
 *
 *  Created on: May 11, 2021
 *      Author: facu
 */

#ifndef PRODUCTO_H_
#define PRODUCTO_H_

typedef struct
{
	int idProducto;
	char descripcion[50];
	Nacionalidad nacionalidad;
	Tipo tipo;
}Producto;

#endif /* PRODUCTO_H_ */
