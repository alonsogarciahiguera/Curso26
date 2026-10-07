/*
 * Alumno_test.cpp
 *
 *  Created on: 7 oct 2026
 *      Author: Alons
 */



#include "Alumno.h"
#include <gtest/gtest.h>

TEST(Alumno, matricula) {

	Alumno<24> a1("72258034S", "Alonso", "Garcia");
	Alumno<24> a2("01010101F", "Diego", "Garcia");
	Alumno<24> a3("10101010G","Marco", "Garcia");
	Persona personList;

	ASSERT_EQ(personList.nPersonas(),3);

	ASSERT_TRUE(personList.isOnList("72258034S"));

	ASSERT_TRUE(a1.matricula("ASE"));
	ASSERT_TRUE(a1.matricula("Embebidos"));
	ASSERT_TRUE(a1.matricula("SEM"));
	ASSERT_FALSE(a1.matricula("ASE"));

	int nAsignaturas= a1.courseList.size();
	ASSERT_EQ(nAsignaturas,3);

	std::cout << "Debe imprimir el listado de 3 asignaturas: " << std::endl;
	a1.print();

	std::cout << " Cuestion a justificar en la memoria" << std::endl;
	Persona *dat;
	dat= &a1;
	dat->print();
}
