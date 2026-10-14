/*
 * Rectangulo.h
 *
 *  Created on: 14 oct 2026
 *      Author: Alons
 */

#ifndef RECTANGULO_H_
#define RECTANGULO_H_

#include "Sharpe.h"

class Rectangulo: public Sharpe {

private:
	float lado;
	float alto;

public:
	Rectangulo(float lado, float alto);
	virtual ~Rectangulo();

	float perimetro();
	float area();
};

#endif /* RECTANGULO_H_ */
