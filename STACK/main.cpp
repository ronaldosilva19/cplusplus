#include <iostream>
#include <stack>

using namespace std;

int main(){
	// Definindo uma pilha.

	stack<int> s;
	for(int i = 0; i < 10; i++){
		cout << "Adicionando o elemento " << (i*10) << " a pilha.\n";
		s.push(i*10);
	}

	cout << "\n";
	while(!s.empty()){
		cout << "Removendo elemento do topo: " << s.top() << "\n";
		s.pop();
	}
	cout << "Removeu todos os elementos da pilha.\n";
	return 0;
}