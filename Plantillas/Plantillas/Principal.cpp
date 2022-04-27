#include <iostream>
#include <vector>
#include "Nodo.h"
#include "Lista.h"

using namespace std;

/*
* Se pueden agregar más parametros y tipos de variable al agregar más typenames
* Es typename porque indica que se convertirá en el tipo de variable que reciba primero, obligando al siguiente valor a ser del mismo tipo
*/
template <typename T1>
const T1& getMax(const T1& param1, const T1& param2) {
	
	if (param1 > param2) {
		return param1;
	}
	return param2;
}

//Arreglo o Array es más restrictivo que un vector pues el primero ya tiene una estructura definida y al vector se puede seguir expandiendo
void Vectores() {

	vector<int> c;
	c.push_back(7);
	c.push_back(2);
	c.push_back(5);

	for (auto i = c.begin(); i != c.end(); i++) {
		cout << *i << endl;
	}
};

int main() {

	//Se puede definir implicitamente al agregar el tipo de variable en su invocacion ...getMax<tipo_variable>(2,4)...
	/*std::cout << getMax(2, 4) << std::endl;
	double a = 1.002;
	double b = 1.0100;
	std::cout << getMax(a, b) << std::endl;
	std::cout <<" "<< std::endl;

	vector<int> a;
	a.push_back(7);
	a.push_back(2);
	a.push_back(5);

	for (auto i = a.begin(); i != a.end(); i++) {
		cout << *i << endl;
	}

	int valor_1 = 0;
	int aux = 1;

	std::cout << "Ingrese el valor a agregar en la lista: ";
	std::cin >> valor_1;
	Nodo<int> b(valor_1);

	std::cout << "Desea ingresar otro valor? 0.No 1.Si :";
	std::cin >> aux;

	if (aux == 1) {
		do {
			int valor = 0;
			std::cout << "\nIngrese el valor a agregar en la lista: ";
			std::cin >> valor;
			b.AgregarValor(valor);

			std::cout << "Desea ingresar otro valor? 0.No 1.Si :";
			std::cin >> aux;

		} while (aux == 1);
	}

	std::cout << "\nDatos almacenados en la lista: " << endl;
	Nodo<int>* dummy = nullptr;
	dummy = &b;
	while (dummy != nullptr) {
		cout << dummy->GetValor() <<endl;
		dummy = dummy->next();
	}*/

	Lista lista1;
	lista1.Hacer_Lista();




	return 0;
}
