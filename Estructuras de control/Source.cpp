#include <iostream>
#include <vector>
#include <deque>
#include <set>
#include <map>

using namespace std;

template<typename Llave>
struct ReverseSprt{
	bool operator()(const Llave & llave1, const Llave & llave2) {
		return llave1 > llave2;
	}
};

int main() {

	//Todos son contenedores 
	vector<int> a; //Esta estructura agrega los datos al final
	deque<int> b;  //Esta estructura inserta los datos al incio 
	set<int> c;  //Ordena la losta cada vez que se agrega un dato y no permite duplicados

	a.push_back(50);
	a.push_back(100);
	a.push_back(150);
	a.push_back(200);

	vector<int>::iterator arrayIterator = a.begin();
	while (arrayIterator != a.end()) {
		cout << *arrayIterator << endl;
		++arrayIterator;
	}
	cout << "" << endl;

	//Debería mostrar los datos al reves 
	/*b.push_back(100);
	b.push_back(399);

	deque<int>::iterator arrayIterator_2 = b.begin();
	while (arrayIterator_2 != b.end()) {
		cout << *arrayIterator_2 << endl;
		++arrayIterator_2;
	}*/
	
	vector<int>::iterator nodo_Encontrado = find(a.begin(),a.end(), 150);
	if (nodo_Encontrado != a.end()) {
		int posicion = distance(a.begin(), nodo_Encontrado);
		cout << "Tu nodo se encontro en la posicion: " << posicion << endl << "Con el valor de: " << *nodo_Encontrado;
	}

	cout << "\n" << endl;
	//Json pero concido como mapa
	map<int, string> mapInt_String;
	//multimap<int, string> map_IntString;
	mapInt_String.insert(pair <int, string>(1000, "Dinero"));
	for (auto elemento = mapInt_String.cbegin(); elemento != mapInt_String.cend(); ++elemento){
		cout << elemento->first << "->" << elemento->second << endl;
	}
}