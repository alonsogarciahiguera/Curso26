/*
 * Derivada.cpp
 *
 *  Created on: 30 sept 2026
 *      Author: Alons
 */

#include "Derivada.h"
#include <iostream>

Derivada::Derivada(int a, int b) {
	Base::a=a;
	Base::b=b;
	// TODO Auto-generated constructor stub
	std::cout << "En constructor Derivada::Derivada(int a, int b)" << std::endl;

}

Derivada::~Derivada() {
	// TODO Auto-generated destructor stub
	std::cout << "En destructor Derivada::Derivada()" << std::endl;

}



int Derivada::Suma() {
	return a+b+100;
}
