/*
 * Base.h
 *
 *  Created on: 30 sept 2026
 *      Author: Alons
 */

#ifndef BASE_H_
#define BASE_H_
#include <iostream>

class Base {
protected:
	int a;
	int b;
public:
	static int comun;
	int global();
	void get(int & va, int &vb);//paso la referencia, no el valor
	virtual int Suma();
	Base();
	virtual ~Base();
	Base(const Base &other);
	Base(int va){ //inline
		a=va;
		b=0;
	}
};

#endif /* BASE_H_ */
