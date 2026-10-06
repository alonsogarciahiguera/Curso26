/*
 * Base.cpp
 *
 *  Created on: 30 sept 2026
 *      Author: Alons
 */

#include "Base.h"
#include <iostream>

int Base::comun=0;

int Base::global(){
	comun++;
	return comun;
}
Base::Base() {
	// TODO Auto-generated constructor stub
	std::cout << "En constuctor" << std::endl;
	a=0;
	b=0;

}

Base::~Base() {
	// TODO Auto-generated destructor stub
	std::cout << "En destructor" << std::endl;

}

Base::Base(const Base &other) {
	// TODO Auto-generated constructor stub
	a=other.a;
	b=other.b;
	std::cout << "En constructor Base::Base(const Base &other)" << std::endl;


}

void Base::get(int & va, int &vb){
	va=a;
	vb=b;
}

int Base::Suma(){
	return a+b;
}

