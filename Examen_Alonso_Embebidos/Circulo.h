/*
 * Circulo.h
 *
 *  Created on: 14 oct 2026
 *      Author: Alons
 */

template <typename T>

class Circulo {
protected:
	T radio;

public:
	Circulo(T r);
	virtual ~Circulo();

	T area();
	T perimetro();
};



