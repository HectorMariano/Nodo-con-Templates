#include <iostream>
#include <memory>
#include "Fecha.h"

int main() {
	/*Fecha dia_1(12, 04, 2022);
	dia_1.AgregarDia();
	dia_1.AgregarDia();
	dia_1++;
	std::cout << dia_1.operator const char* () << std::endl;
	std::cout << dia_1.ImprimirDia()<<std::endl;*/

	std::unique_ptr<int> smartIntPtr(new int);
	*smartIntPtr = 42;

	std::cout << "Integer value is: " << smartIntPtr << std::endl;
	std::unique_ptr<Fecha> smartFechaPtr(new Fecha(25, 04, 2000));
	smartFechaPtr->ImprimirDia();

	
}