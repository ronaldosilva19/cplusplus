#include <iostream>
#include <set>

using namespace std;

int main(){

	// Definindo set de forma normal.

	set<char> s;
	s.insert('l');
	s.insert('o');
	s.insert('v');
	s.insert('e');


	for(auto in : s){
		cout << in << "\n";
	}

	// Definindo de forma do maior elemento pro menor.

	set<int, greater<int>> sg;
	sg.insert(10);
    sg.insert(5);
    sg.insert(12);
    sg.insert(4);

    for (std::set<int>::iterator value = sg.begin(); value != sg.end(); ++value){
    	cout << *value << "\n";
    }

    cout << "Tamanho do conjunto: " << sg.size() << "\n";

    if(!sg.empty()){
    	cout << "Nao esta vazio.\n";
    }else{
    	cout << "Esta vazio.\n";
    }

    cout << "Lower-bound: " << *sg.lower_bound(10) << "\n";
    cout << "Upper-bound: " << *sg.upper_bound(10) << "\n";
	return 0;
}