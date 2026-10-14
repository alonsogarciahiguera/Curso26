/*
 * Rectangulo.cpp
 *
 *  Created on: 14 oct 2026
 *      Author: Alons
 */

#include "Rectangulo.h"

Rectangulo::Rectangulo(float lado, float alto) {
	this-> lado=lado ;
	this ->alto=alto;
	// TODO Auto-generated constructor stub

}

Rectangulo::~Rectangulo() {
	// TODO Auto-generated destructor stub
}

float Rectangulo::area (){
	float resultado= lado*alto;
	return resultado;
}

float Rectangulo::perimetro (){
	float resultado= 2*(lado+alto);
	return resultado;
}
