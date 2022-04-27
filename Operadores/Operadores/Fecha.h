#pragma once
#include <string>
#include <iostream>
#include <sstream>

class Fecha{
	private:
		int dia, mes, anio;
		std::string Fecha_String;

	public:
		Fecha(int dia_aux, int mes_aux, int anio_aux) : dia(dia_aux), mes(mes_aux), anio(anio_aux) {};
		
		void AgregarDia() {
			dia = dia++;
		}

		void  ImprimirDia() {
			std::cout << mes << "/" << dia << "/" << anio;
		}

		//Prefix, antes de la variable. Hace una operacion previa al manejo de la variable
		Fecha& operator ++() {
			++dia;
			return *this;
		}

		Fecha& operator --() {
			--dia;
			return *this;
		}

		Fecha operator + (int diasAgregados) {
			Fecha nuevaFecha(mes, dia + diasAgregados, anio);
			return nuevaFecha;
		}

		//Posfix, despues del manejo de la variable
		Fecha operator ++(int) {
			Fecha copy(dia, mes, anio);
			++dia;
			return copy;
		}

		Fecha operator --(int) {
			Fecha copy(dia, mes, anio);
			--dia;
			return copy;
		}

		//Operador de Conversion
		operator const char* () {
			std::ostringstream variable;
			variable << mes << "/" << dia << "/" << anio;
			Fecha_String = variable.str();
			return Fecha_String.c_str();
		}
};

