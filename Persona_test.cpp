/*
 * Persona_test.cpp
 *
 *  Created on: 7 oct 2026
 *      Author: Alons
 */


#include "Persona.h"
#include <gtest/gtest.h>

//Test constructor
TEST(Persona, constructor){
	Persona p1("72258034S", "Alonso", "Garcia");
	Persona p2;


	ASSERT_EQ(p2.nPersonas(),1);
	ASSERT_TRUE(p2.isOnList("72258034S"));
	ASSERT_FALSE(p2.isOnList("01010101F"));
}



// Test destructor
TEST(Persona, destructor) {
	// Creo una persona
	Persona p1("123456789A", "MiNombre", "Mis Apellidos");
	Persona p2;
	{
			Persona p3("000000000B", "MiNombre 2", "Mis Apellidos 2");
			// Solo tiene que haber 2 personas en la lista
			ASSERT_EQ(p2.nPersonas(),2);
			// Comprobar que su id es correcto
			ASSERT_TRUE(p2.isOnList("000000000B"));
	}
	// Solo tiene que haber 1 personas en la lista
	ASSERT_EQ(p2.nPersonas(),1);
	// Comprobar que su id es correcto
	ASSERT_FALSE(p2.isOnList("000000000B"));
}

TEST(Persona, print){
	Persona p1("72258034S", "Alonso", "Garcia");
	Persona p2;
	Persona p3("01010101F", "Diego", "Garcia");

	std::cout << "Debe imprimir: 72258034S : Garcia , Alonso" << std::endl;
	std::cout << p1.printPersona() << std::endl;

	std::cout << "Debe imprimir la lista de 2 personas: " << std::endl;
	p2.print();
}
