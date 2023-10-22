#include <iostream>
#include <vector>


int main(){
	// definindo um vector.

	std::vector<int> v;

	for(int i = 0; i < 10; i++){
		v.push_back(i * 10);
	}

	// percorrendo elementos do vector usando Iteradores.

	for(auto index = v.begin(); index != v.end(); index++){
		std::cout << *index << std::endl;
	} 

	std::cout << "-------------------"<< std::endl << std::endl;
	// percorrendo os elementos do vector usando Iteradores Reversos.

	for(auto index = v.rbegin(); index != v.rend(); index++){
		std::cout << *index << std::endl;
	}


	// Capacidade do vector.

	std::cout << "capacidade do vector: " << v.size() << "\n";

	// Acessar elemento.
	std::cout << "Elemento em uma determinada posicao: " << v.at(3) << "\n";
	std::cout << "Elemento da frente do vector: " << v.front() << "\n";
	std::cout << "Elemento do final do vector: " << v.back() << "\n";
	std::cout << "Ponteiro direto usado para a  matriz: " << v.data() << "\n";

	// Modificadores do vector.

	std::vector<int> vetor;
	vetor.assign(5, 10);
	vetor.insert(vetor.begin() + 2, 20);
	for(auto value = vetor.begin(); value != vetor.end(); value++){
		std::cout << *value << "\n";
	}

	return 0;
}