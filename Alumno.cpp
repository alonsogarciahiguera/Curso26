/*
 * Alumno.cpp
 *
 *  Created on: 7 oct 2026
 *      Author: Alons
 */

#include "Alumno.h"

template <int curso>
Alumno<curso>::~Alumno() {
	// TODO Auto-generated destructor stub
}

template <int curso>
Alumno<curso>::Alumno(std::string ID,
		std::string Nombre,
		std::string Apellidos) : Persona::Persona(ID, Nombre, Apellidos) {
}

template <int curso>
bool Alumno<curso>::matricula(std::string asignatura) {
	for( std::vector<std::string>::iterator it=courseList.begin();
			it < courseList.end();
			it++) {
		if((*it)==asignatura) {
			return false;	// Ya matriculado. No se incluye
		}
	}
	courseList.emplace_back(asignatura);	// inserta asignatura en la lista
	return true;
}

// Escribe lista asignaturas
template <int curso>
void Alumno<curso>::print() {
	std::cout << "Listado de asignaturas en curso " << curso << "-" << curso+1 << std::endl;
	std::cout << " Alumno: " << printPersona() << std::endl;
	for( std::vector<std::string>::iterator it=courseList.begin();
			it < courseList.end();
			it++) {
		std::cout << "  Asignatura: " << (*it) << std::endl;
	}
}

// Declara los posibles valores de curso para que se pueda usar la clase Alumno con esos valores
template class Alumno<24>;

