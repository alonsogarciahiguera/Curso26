/*
 * Derivada.h
 *
 *  Created on: 30 sept 2026
 *      Author: Alons
 */

#ifndef DERIVADA_H_
#define DERIVADA_H_

#include "Base.h"

class Derivada: public Base {
public:
	using Base::Base;
	Derivada(int a, int b);
	virtual ~Derivada();
	int Suma();
	Derivada(const Derivada &other);
};

#endif /* DERIVADA_H_ */
