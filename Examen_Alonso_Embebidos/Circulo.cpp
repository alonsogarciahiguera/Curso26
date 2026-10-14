/*
 * Circulo.cpp
 *
 *  Created on: 14 oct 2026
 *      Author: Alons
 */

#include "Circulo.h"
#include <cmath>

template <typename T> Circulo<T>::Circulo(T r) {
	radio = r;
}

template <typename T> Circulo<T>::~Circulo() {
}

template <typename T> T Circulo<T>::area() {
	T resultado = M_PI * radio * radio;
	return resultado;
}

template <typename T> T Circulo<T>::perimetro() {
	T resultado = 2 * M_PI * radio;
	return resultado;
}

template class Circulo<double>;
