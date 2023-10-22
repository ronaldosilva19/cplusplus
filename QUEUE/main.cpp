#include <iostream>
#include <queue>

using namespace std;

int main(){
	queue<int> q;

	// Adicionando elementos na fila.
	for(int i = 0; i < 10; i++){
		cout << "Adicionando o elemento " << (i*10) << " na fila.\n";
		q.push(i*10);
	}

	cout << "\n";
	while(!q.empty()){
		cout << "Elemento do inicio da fila: " << q.front() << "\n";
		q.pop();
	}

	cout << "\n";
	queue<double> q1;

	// Utilizando o emplace.
	for(int i = 0; i < 10; i++){
		cout << "Adicionando o elemento " << (i*1.5) << " na fila.\n";
		q1.emplace(i * 1.5);
	}

	cout << "\n";
	while(!q1.empty()){
		cout << "Elemento do inicio da fila: " << q1.front() << "\n";
		q1.pop();
	}

	cout << "Ultimo elemento da fila: " << q1.back() << "\n";
	return 0;
}