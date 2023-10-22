#include <iostream>
#include <list>
#include <iterator>

using namespace std;

int main(){

	// Definindo uma lista.

	list<int> lista = {10, 20, 30, 40, 50};

	// Adicionando elemento no inicio da lista.

	lista.push_front(100);

	// Adicionando elemento no final da lista.

	lista.push_back(150);

	// Retornando o elemento do inicio da lista.

	cout << "elemento do inicio da lista: " << lista.front() << "\n";

	// Retornando o elemento do final da lista.

	cout << "elemento do final da lista: " << lista.back() << "\n";

	cout << "Percorrendo os elementos da lista: \n";
	for(list<int>::iterator it = lista.begin(); it != lista.end(); it++){
		cout << *it << "\n";
	}

	// Ordenando uma lista.
	lista.sort();

	// De forma reversa.
	lista.reverse();
	// Removendo o elemento do final da lista.
	cout << "Removendo o elemento: " << lista.back() << "\n";
	lista.pop_back();

	// Removendo o elemento do inicio da lista.
	cout << "Removendo o elemento: " << lista.front() << "\n";
	lista.pop_front(); 
	return 0;
}