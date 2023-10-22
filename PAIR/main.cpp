#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main(){

	// Pair<primeiro, segundo>.
	pair<int, string> par;
	par.first = 29;
	par.second = "Ronaldo";

	cout << par.first << " - " << par.second << "\n";

	// Declarando um Vector de Pairs.

	std::vector<pair<int, int>> vp;

	for(int i = 0; i < 10; i++){
		// Adicionando os pares ao vector-pair.
		vp.push_back(make_pair(i, i * 10));
	}

	for(auto value = vp.begin(); value != vp.end(); value++){
		cout << value->first << " -- " << value->second << "\n";
	}

	cout << "\n\n";
	for(auto value : vp){
		cout << value.first << " -> "<< value.second << "\n";
	}

	vector<pair<int, int>> VP;
	for(int i = 0; i < 5; i++){
		VP.emplace_back(i, i * 5);
	}

	cout << "\n\n";
	for(auto value : VP){
		cout << value.first << " --> " << value.second << "\n";
	}
	return 0;
}